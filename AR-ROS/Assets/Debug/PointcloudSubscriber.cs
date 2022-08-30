using UnityEngine;
using System;
using UnityEditor;

namespace RosSharp.RosBridgeClient
{
    [RequireComponent(typeof(RosConnector))]
    public class PointcloudSubscriber : UnitySubscriber<MessageTypes.Sensor.PointCloud2>
    {
        //Mesh variables
        public RgbPoint3[] Points;
        private Mesh mesh;
        public MeshRenderer meshRenderer;
        Vector3[] vertices;
        //int[] triangles;
        Color[] colors;
        //Subscription variable
        private bool isMessageReceived = false;

        protected override void Start()
        {   
            Debug.Log("Start\n");
            //Start Unity Subscriber
            base.Start();
            //Create empty new mesh for points
            mesh = new Mesh();
            GetComponent<MeshFilter>().mesh = mesh;
            meshRenderer.material = new Material(Shader.Find("Custom/PointCloudShader"));
        }

        private void Update() //Function to update when new messages are received
        {
            if(isMessageReceived){
                ProcessMessage();
            }
        }
        
        protected override void ReceiveMessage(MessageTypes.Sensor.PointCloud2 message) //Automatically called when new mesage received
        {
            Debug.Log("ReceiveMessage\n");
            //Processes message, transforms into form Unity can understand
            //NOTE: Pointcloud.cs methods could be implemented here (depth & image)
            long I = message.data.Length / message.point_step;
            RgbPoint3[] Points = new RgbPoint3[I];
            byte[] byteSlice = new byte[message.point_step];
            for (long i = 0; i < I; i++)
            {
                Array.Copy(message.data, i * message.point_step, byteSlice, 0, message.point_step);
                Points[i] = new RgbPoint3(byteSlice, message.fields);
            }
            vertices = new Vector3[I];
            colors = new Color[I];
            for (var i = 0; i < I; i++)
            {
                vertices[i].x = Points[i].x;
                vertices[i].y = Points[i].z;
                vertices[i].z = Points[i].y;
                colors[i].r = (float)((float)Points[i].rgb[0] / 255.0);
                colors[i].g = (float)((float)Points[i].rgb[1] / 255.0);
                colors[i].b = (float)((float)Points[i].rgb[2] / 255.0);
                colors[i].a = 1.0F; 
                //Debug.Log("Colors: " + colors[i].ToString());
                //Debug.Log("Vertex Colors: " + Points[i].rgb[0] + " " + Points[i].rgb[1] + " " + Points[i].rgb[2] + "\n");
            }
            isMessageReceived = true;
        }
    
        private void ProcessMessage() //Clears mesh and loads new vertices
        {
            Debug.Log("ProcessMessage\n");

            mesh.Clear(); //Removed try / catch loop
            mesh.vertices = vertices;
            mesh.colors = colors;

            //Graphs mesh as points. Works with /rtabmap/cloud_map & /voxel_cloud
            int[] indices = new int[vertices.Length];
            for(int i = 0; i < mesh.vertices.Length; i++){
                indices[i] = i;
            }
            mesh.SetIndices(indices, MeshTopology.Points, 0);
            mesh.RecalculateBounds();
            //AssetDatabase.CreateAsset(mesh, "Assets/testMeshColorRTABMap4.asset");
            //AssetDatabase.SaveAssets();
            isMessageReceived = false; //Resets and waits for new message
        }
    }
}