using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;


public class Temporarily : MonoBehaviour
{
    private Vector3[] An = new Vector3[10000];
    private Vector3[] array = new Vector3[10000];
    // Start is called before the first frame update
    void Start()
    {
        An[0] = new Vector3(1,1,1);
        An[1] = new Vector3(2,2,2);
        An[1] = new Vector3(3,3,3);

        int[] scores = { 80,90,70,50,80,60,100,40,80,90 };
        int index1 = Array.IndexOf( An,new Vector3(0,1,1) );

        Debug.Log(index1);
//         MeshTopology topo = meshFilter.Mesh.GetTopology(0);
//         Debug.Log(topo);  //"triangles" と出力される
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
