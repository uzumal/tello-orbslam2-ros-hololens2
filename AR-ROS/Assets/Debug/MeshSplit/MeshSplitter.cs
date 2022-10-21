/* https://github.com/artnas/Unity-Plane-Mesh-Splitter */

using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace MeshSplit
{
    public class MeshSplitter
    {
        private readonly MeshSplitParameters _parameters;
        
        /* Mesh data */
        private Vector3[] _vertices;
        private int[] _indices;
        private List<List<Vector2>> _uvChannels;
        private Vector3[] _normals;
        private Color32[] _colors;
        
        private Dictionary<Vector3Int, List<int>> _pointIndicesMap;

        public MeshSplitter(MeshSplitParameters parameters)
        {
            _parameters = parameters;
        }

        public List<(Vector3Int gridPoint, Mesh mesh)> Split(Mesh mesh)
        {
            CopyMeshData(mesh);
            CreatePointIndicesMap();
            return CreateChildMeshes();
        }

        private void CopyMeshData(Mesh mesh)
        {
            _vertices = mesh.vertices;
            _indices = mesh.triangles;

            if (_parameters.UseVertexNormals)
            {
                _normals = mesh.normals;
            }

            if (_parameters.UseVertexColors)
            {
                _colors = mesh.colors32;
            }

            if (_parameters.UvChannels > 0)
            {
                _uvChannels = new List<List<Vector2>>();
                for (var i = 0; i < _parameters.UvChannels; i++)
                {
                    var uvs = new List<Vector2>();
                    
                    mesh.GetUVs(i, uvs);

                    if (uvs.Count == 0)
                    {
                        Debug.LogWarning($"Mesh split parameters have more uv channels ({_parameters.UvChannels}) than mesh. Changing uv channels to {i}");
                        _parameters.UvChannels = i;
                        break;
                    }

                    _uvChannels.Add(uvs);
                }
            }
        }
        
        private void CreatePointIndicesMap()
        {
            // Create a list of triangle indices from our mesh for every grid node
            _pointIndicesMap = new Dictionary<Vector3Int, List<int>>();

            for (var i = 0; i < _indices.Length; i += 3)
            {
                // middle of the current triangle (average of its 3 verts).
                var currentPoint = (_vertices[_indices[i]] + _vertices[_indices[i + 1]] + _vertices[_indices[i + 2]]) / 3;

                // calculate coordinates of the closest grid node.
                // ignore an axis (set it to 0) if its not enabled
                var gridPos = new Vector3Int(
                    _parameters.SplitAxisX ? Mathf.RoundToInt(Mathf.Round(currentPoint.x / _parameters.GridSize) * _parameters.GridSize) : 0,
                    _parameters.SplitAxisY ? Mathf.RoundToInt(Mathf.Round(currentPoint.y / _parameters.GridSize) * _parameters.GridSize) : 0,
                    _parameters.SplitAxisZ ? Mathf.RoundToInt(Mathf.Round(currentPoint.z / _parameters.GridSize) * _parameters.GridSize) : 0
                );

                // check if the dictionary has a key (our grid position). Add it / create a list for it if it doesnt.
                if (!_pointIndicesMap.ContainsKey(gridPos))
                {
                    _pointIndicesMap.Add(gridPos, new List<int>());
                }

                // add these triangle indices to the list
                _pointIndicesMap[gridPos].Add(_indices[i]);
                _pointIndicesMap[gridPos].Add(_indices[i + 1]);
                _pointIndicesMap[gridPos].Add(_indices[i + 2]);
            }
        }

        private List<(Vector3Int gridPoint, Mesh mesh)> CreateChildMeshes()
        {
            // create a submesh for each list of triangle indices
            return _pointIndicesMap.Select(entry => CreateMeshForGridPoint(entry.Key, entry.Value)).ToList();
        }
        
        private (Vector3Int gridPoint, Mesh mesh) CreateMeshForGridPoint(Vector3Int gridPoint, List<int> dictionaryTriangles)
        {
            var meshHasNormals = _normals != null && _normals.Length > 0;
            var meshHasColors = _colors != null && _colors.Length > 0;
            
            // mesh data lists for the new mesh
            var vertices = new List<Vector3>();
            var tris = new List<int>();
            var normals = new List<Vector3>();
            var colors = new List<Color32>();

            var uvChannels = new List<List<Vector2>>();
            for (var i = 0; i < _parameters.UvChannels; i++)
            {
                uvChannels.Add(new List<Vector2>());
            }

            // these lists are filled in this loop
            for (var i = 0; i < dictionaryTriangles.Count; i += 3)
            {
                var a = i;
                var b = i + 1;
                var c = i + 2;
                
                vertices.Add(_vertices[dictionaryTriangles[a]]);
                vertices.Add(_vertices[dictionaryTriangles[b]]);
                vertices.Add(_vertices[dictionaryTriangles[c]]);

                tris.Add(a);
                tris.Add(b);
                tris.Add(c);

                for (var j = 0; j < _parameters.UvChannels; j++)
                {
                    uvChannels[j].Add(_uvChannels[j][dictionaryTriangles[a]]);
                    uvChannels[j].Add(_uvChannels[j][dictionaryTriangles[b]]);
                    uvChannels[j].Add(_uvChannels[j][dictionaryTriangles[c]]);
                }

                if (_parameters.UseVertexNormals && meshHasNormals)
                {
                    normals.Add(_normals[dictionaryTriangles[a]]);
                    normals.Add(_normals[dictionaryTriangles[b]]);
                    normals.Add(_normals[dictionaryTriangles[c]]);
                }
                
                if (_parameters.UseVertexColors && meshHasColors)
                {
                    colors.Add(_colors[dictionaryTriangles[a]]);
                    colors.Add(_colors[dictionaryTriangles[b]]);
                    colors.Add(_colors[dictionaryTriangles[c]]);
                }
            }

            // Create a new mesh
            var newMesh = new Mesh
            {
                name = $"Submesh {gridPoint}",
                vertices = vertices.ToArray(),
                triangles = tris.ToArray()
            };

            if (_parameters.UseVertexNormals && normals.Count > 0)
            {
                newMesh.normals = normals.ToArray();
            }
            
            if (_parameters.UseVertexColors && colors.Count > 0)
            {
                newMesh.colors32 = colors.ToArray();
            }
            
            for (var i = 0; i < _parameters.UvChannels; i++)
            {
                newMesh.SetUVs(i, uvChannels[i]);
            }

#if  UNITY_EDITOR
            // optimize mesh
            UnityEditor.MeshUtility.Optimize(newMesh);
#endif

            return (gridPoint, newMesh);
        }
    }
}