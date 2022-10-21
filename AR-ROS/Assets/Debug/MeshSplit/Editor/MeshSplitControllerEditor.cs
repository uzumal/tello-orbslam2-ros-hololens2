/* https://github.com/artnas/Unity-Plane-Mesh-Splitter */

using UnityEditor;
using UnityEngine;

namespace MeshSplit.Editor
{
    [CustomEditor(typeof(MeshSplitController))]
    public class MeshSplitControllerEditor : UnityEditor.Editor
    {
        public override void OnInspectorGUI()
        {
            MeshSplitController instance = (MeshSplitController)target;

            DrawDefaultInspector();

            if (GUILayout.Button("Create submeshes"))
            {
                Undo.RecordObject(instance, "Created submeshes");
                instance.Split();
            }

            if (GUILayout.Button("Clear submeshes"))
            {
                Undo.RecordObject(instance, "Cleared submeshes");
                instance.Clear();
            }
        }
    }
}