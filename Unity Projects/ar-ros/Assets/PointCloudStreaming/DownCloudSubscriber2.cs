using System;
using System.Collections;
using System.Collections.Generic;
using RosSharp.RosBridgeClient.MessageTypes.Sensor;
using UnityEngine;
using UnityEngine.UI;
using System.Threading;


namespace RosSharp.RosBridgeClient
{
    [RequireComponent(typeof(RosConnector))]
    public class DownCloudSubscriber2 : UnitySubscriber<MessageTypes.Sensor.PointCloud2>
    {
        private byte[] byteArray;
        private bool isMessageReceived = false;
        // bool readyToProcessMessage = true;
        private int size;

        private Vector3[] pcl;
        // private Vector3[] positions = new Vector3[] { new Vector3(0, 0, 0), new Vector3(0, 1, 0) };
        // private List<Vector3> myPositions = new List<Vector3>();
        private Color[] pcl_color;

        int width;
        int height;
        int row_step;
        int point_step;

        // private GameObject drone;
        // private GameObject pointCloud;
        // private GameObject obj;

        protected override void Start()
        {
            // drone = GameObject.Find("droneModel");
            // pointCloud = GameObject.Find("PointCloud1");
            // obj = (GameObject)Resources.Load ("Point");
            // myPositions.Add (new Vector3 (0.0f, 0.0f, 0.0f));
            base.Start();

        }

        public void Update()
        {
            if (isMessageReceived)
                PointCloudRendering();
        }

        protected override void ReceiveMessage(MessageTypes.Sensor.PointCloud2 message)
        {
            size = message.data.GetLength(0);

            byteArray = new byte[size];
            byteArray = message.data;


            width = (int)message.width;
            height = (int)message.height;
            row_step = (int)message.row_step;
            point_step = (int)message.point_step;

            size = size / point_step;
            isMessageReceived = true;
        }

        //点群の座標を変換
        void PointCloudRendering()
        {
            pcl = new Vector3[size * 5];
            pcl_color = new Color[size];

            int x_posi;
            int y_posi;
            int z_posi;

            float x;
            float y;
            float z;

            int rgb_posi;
            int rgb_max = 255;

            float r;
            float g;
            float b;

            // Cube Size
            float _disNum = 3.0f;

            // Cubeの重なり判定
            // Vector3 halfExtents = new Vector3(0.25f, 0.25f, 0.25f);

            //この部分でbyte型をfloatに変換         
            for (int n = 0; n < size; n++)
            {
                x_posi = n * point_step + 0;
                y_posi = n * point_step + 4;
                z_posi = n * point_step + 8;

                x = BitConverter.ToSingle(byteArray, x_posi);
                y = BitConverter.ToSingle(byteArray, y_posi);
                z = BitConverter.ToSingle(byteArray, z_posi);

                //                 Debug.Log("prev" + new Vector3(x, z, y));

                //                 x = (float)Math.Round(x * _disNum, 0, MidpointRounding.AwayFromZero);
                //                 y = (float)Math.Round(y * _disNum, 0, MidpointRounding.AwayFromZero);
                //                 z = (float)Math.Round(z * _disNum, 0, MidpointRounding.AwayFromZero);
                //                 

                x = Mathf.Floor(x * 100) / 100 * _disNum;
                y = Mathf.Floor(y * 100) / 100 * _disNum;
                z = Mathf.Floor(z * 100) / 100 * _disNum;


                rgb_posi = n * point_step + 16;

                //                 b = byteArray[rgb_posi + 0];
                //                 g = byteArray[rgb_posi + 1];
                //                 r = byteArray[rgb_posi + 2];
                // 
                //                 r = r / rgb_max;
                //                 g = g / rgb_max;
                //                 b = b / rgb_max;

                //                 Debug.Log("after" + x);

                if (Mathf.Approximately(x, 0.0f) == false & Mathf.Approximately(y, 0.0f) == false & Mathf.Approximately(z, 0.0f) == false)
                {
                    pcl[n] = new Vector3(x, y, z).Ros2Unity();
                    // Debug.Log("pcl :" + n + " " + pcl[n]);
                    // pcl_color[n] = new Color(255, 0, 0);
                    // preview pointcloud
                }
                //                 pcl_color[n] = new Color(r, g, b);
            }
            // DownSampling();
            //             positions = GetPCL();
            //             if (positions == null)
            //             {
            //                 return;
            //             }
            //             for(int i = 0; i < positions.Length; i++){
            //                 int isPosition = myPositions.IndexOf(positions[i]);
            //                 if (!Physics.CheckBox(positions[i], halfExtents, Quaternion.identity)){
            //                     // Check if exists
            //                     if(isPosition < 0){
            // //                         Debug.Log("position :" + i + " " + positions[i]);
            //                         GameObject cloneObject = Instantiate (obj, Vector3.zero, Quaternion.identity);
            //                         cloneObject.transform.parent = pointCloud.transform;
            //                         cloneObject.transform.position = positions[i];
            //                         myPositions.Add (positions[i]);
            //                     }
            //                 }
            //             }
        }

        void DownSampling()
        {
            int cnt = 0;
            // Cubeの重なり判定
            Vector3 halfExtents = new Vector3(1.0f, 1.0f, 1.0f);
            for (int i = 0; i < pcl.Length; i++)
            {
                if (Physics.CheckBox(pcl[i], halfExtents, Quaternion.identity))
                {
                    pcl[cnt] = pcl[i];
                    cnt++;
                }
                else
                {
                    // Debug.Log("noise");
                }
            }
        }

        public Vector3[] GetPCL()
        {
            return pcl;
        }

        public Color[] GetPCLColor()
        {
            return pcl_color;
        }
    }
}