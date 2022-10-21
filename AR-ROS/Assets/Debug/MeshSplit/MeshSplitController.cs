/* https://github.com/artnas/Unity-Plane-Mesh-Splitter */

using System;
using System.Collections.Generic;
using UnityEngine;

namespace MeshSplit
{
    public class MeshSplitController : MonoBehaviour
    {
        public MeshSplitParameters Parameters;
        public bool DrawGridGizmosWhenSelected = false;

        private Mesh _baseMesh;
        private MeshRenderer _baseRenderer;

        // generated children are kept here, so the script knows what to delete on Split() or Clear()
        [HideInInspector] [SerializeField]
        private List<GameObject> _children;

        public void Split()
        {
            DestroyChildren();

            if (GetUsedAxisCount() < 1)
            {
                throw new Exception("You have to choose at least 1 axis.");
            }

            var meshFilter = GetComponent<MeshFilter>();
            if (meshFilter)
            {
                _baseMesh = meshFilter.sharedMesh;
            }
            else
            {
                throw new Exception("MeshFilter component is required.");
            }
            
            _baseRenderer = GetComponent<MeshRenderer>();
            if (_baseRenderer)
            {
                _baseRenderer.enabled = false;
            }

            var meshSplitter = new MeshSplitter(Parameters);
            var subMeshes = meshSplitter.Split(_baseMesh);
                
            _children = new List<GameObject>();
            foreach (var subMesh in subMeshes)
            {
                CreateChild(subMesh);
            }
        }

        private void CreateChild((Vector3Int gridPoint, Mesh mesh) subMesh)
        {
            var newGameObject = new GameObject
            {
                name = "SubMesh " + subMesh.gridPoint
            };
        
            newGameObject.transform.SetParent(transform, false);
            if (Parameters.UseParentLayer)
            {
                newGameObject.layer = gameObject.layer;
            }
            if (Parameters.UseParentStaticFlag)
            {
                newGameObject.isStatic = gameObject.isStatic;
            }
            
            // assign the new mesh to this submeshes mesh filter
            var newMeshFilter = newGameObject.AddComponent<MeshFilter>();
            newMeshFilter.sharedMesh = subMesh.mesh;

            var newMeshRenderer = newGameObject.AddComponent<MeshRenderer>();
            if (Parameters.UseParentMeshRendererSettings && _baseRenderer)
            {
                newMeshRenderer.sharedMaterial = _baseRenderer.sharedMaterial;
                newMeshRenderer.sortingOrder = _baseRenderer.sortingOrder;
                newMeshRenderer.sortingLayerID = _baseRenderer.sortingLayerID;
                newMeshRenderer.shadowCastingMode = _baseRenderer.shadowCastingMode;
            }

            if (Parameters.GenerateColliders)
            {
                var meshCollider = newGameObject.AddComponent<MeshCollider>();
                meshCollider.convex = Parameters.UseConvexColliders;
                meshCollider.sharedMesh = subMesh.mesh;
            }
            
            _children.Add(newGameObject);
        }

        private int GetUsedAxisCount()
        {
            return (Parameters.SplitAxisX ? 1 : 0) + (Parameters.SplitAxisY ? 1 : 0) + (Parameters.SplitAxisZ ? 1 : 0);
        }

        public void Clear()
        {
            DestroyChildren();

            var meshRenderer = GetComponent<MeshRenderer>();
            if (meshRenderer)
            {
                meshRenderer.enabled = true;
            }
        }

        private void DestroyChildren()
        {
            if (_children == null) return;
            
            foreach (var t in _children)
            {
                DestroyImmediate(t.GetComponent<MeshFilter>().sharedMesh);
                DestroyImmediate(t);
            }

            _children.Clear();
        }

        private void OnDrawGizmosSelected()
        {
            var meshFilter = GetComponent<MeshFilter>();
            if (!DrawGridGizmosWhenSelected || !meshFilter || !meshFilter.sharedMesh) 
                return;
            
            var bounds = meshFilter.sharedMesh.bounds;

            var xSize = Mathf.Ceil(bounds.extents.x) + Parameters.GridSize;
            var ySize = Mathf.Ceil(bounds.extents.y) + Parameters.GridSize;
            var zSize = Mathf.Ceil(bounds.extents.z) + Parameters.GridSize;

            for (var z = -zSize; z <= zSize; z += Parameters.GridSize)
            {
                for (var y = -ySize; y <= ySize; y += Parameters.GridSize)
                {
                    for (var x = -xSize; x <= xSize; x += Parameters.GridSize)
                    {
                        var position = transform.position + new Vector3(x, y, z);
                        Gizmos.DrawWireCube(position, Parameters.GridSize * transform.localScale);
                    }
                }
            }
        }
    }
}
