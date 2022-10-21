/* https://github.com/artnas/Unity-Plane-Mesh-Splitter */

using System;
using UnityEngine;

namespace MeshSplit
{
    [Serializable]
    public class MeshSplitParameters
    {
        [Range(0.1f, 64)]
        public float GridSize = 16;

        [Header("Axes.")]
        public bool SplitAxisX = true;
        public bool SplitAxisY = true;
        public bool SplitAxisZ = true;

        [Header("Parent attributes.")]
        public bool UseParentLayer = true;
        public bool UseParentStaticFlag = true;
        public bool UseParentMeshRendererSettings = true;

        [Header("Vertex data.")]
        public bool UseVertexNormals;
        public bool UseVertexColors;
        
        [Header("Amount of uv channels to use.")]
        [Range(0, 8)]
        public int UvChannels = 1;

        [Header("Collisions.")] 
        public bool GenerateColliders;
        public bool UseConvexColliders;
    }
}