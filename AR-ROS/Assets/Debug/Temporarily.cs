using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;


public class Temporarily : MonoBehaviour
{
//     private Vector3[] An = new Vector3[10000];
//     private Vector3[] array = new Vector3[10000];
    private Vector3[] pcl;
    private List<Vector3> myPositions = new List<Vector3>();
    // Start is called before the first frame update
    void Start()
    {
        
        Vector3 halfExtents = new Vector3(0.5f, 0.5f, 0.5f);
        int _disNum = 1;
        pcl = new Vector3[10000];
        float x = Mathf.Floor(1.4f * 100) / 100;
        float y = Mathf.Floor(0.4f * 100) / 100;
        float z = Mathf.Floor(0.3f * 100) / 100;
        pcl[0] = new Vector3(0.4f, 0.0f, -2.0f);
        pcl[1] = new Vector3(1.0f, 1.0f, 0.0f);
        pcl[2] = new Vector3(1.0f, 1.0f, 1.0f);
        myPositions.Add(pcl[0]);
        myPositions.Add(pcl[1]);
        myPositions.Add(pcl[2]);
        
            // ボックスとアイテムが重ならないとき
        if (!Physics.CheckBox(pcl[1], halfExtents, Quaternion.identity))
        {
            Debug.Log("Hello");
        }
        
        Debug.Log(pcl[0]-pcl[1]);
        Debug.Log(myPositions.IndexOf(pcl[0]-pcl[1]));
        Debug.Log(myPositions[0]);
        
//         Debug.Log("x:" + x + "y:" + y + "z:" + z);
        
        x = (float)Math.Round(1.4f * _disNum, MidpointRounding.AwayFromZero);
        y = (float)Math.Round(0.4f * _disNum, MidpointRounding.AwayFromZero);
        z = (float)Math.Round(0.3f * _disNum, MidpointRounding.AwayFromZero);
//         Debug.Log("x:" + x + "y:" + y + "z:" + z);
        
//         Debug.Log(z);
//         Debug.Log(Mathf.Approximately(0.01f, 0.02f));
//         Debug.Log(Mathf.Approximately(z, 1.0f));

        
//         for (int n = 0; n < 4; n++)
//         {
//             int isPosition = Array.IndexOf(pcl, new Vector3(0.15f, 0.15f, 0.19f));
//             Debug.Log(isPosition);
//                 if(isPosition < 0){
//                     pcl[n] = new Vector3(x, y, z) * 10;
//                     Debug.Log(pcl[n]);
//                 }
//             x += 0.1f;
//             y += 0.1f;
//             z += 0.1f;
//         }

//         MeshTopology topo = meshFilter.Mesh.GetTopology(0);
//         Debug.Log(topo);  //"triangles" と出力される
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
