using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using RosSharp.RosBridgeClient;

public class PointCubeRenderer : MonoBehaviour
{
    public PointCloudSubscriber subscriber;

    private GameObject drone;
    private GameObject pointCloud;
    private GameObject obj;
    private GameObject ComPosition;
    // GetPCL
    private Vector3[] positions = new Vector3[] { new Vector3(0, 0, 0), new Vector3(0, 1, 0) };
    // List of generating prefab's transform
    private List<Vector3> myPositions = new List<Vector3>();
    // List of generating prefab
    private List<GameObject> prefabList = new List<GameObject>();
    // prefabカウント
    private int cnt;

    void Start()
    {
        drone = GameObject.Find("droneModel");
        pointCloud = GameObject.Find("PointCloud1");
        obj = (GameObject)Resources.Load("Point");
        ComPosition = Instantiate(obj);
        ComPosition.transform.parent = pointCloud.transform;
        ComPosition.SetActive(false);
        myPositions.Add(new Vector3(0.0f, 0.0f, 0.0f));
        cnt = 0;
        // InvokeRepeating("ResetMesh", 10.0f, 10.0f);
        GeneratePrefab();
    }

    // Update is called once per frame
    void Update()
    {
        UpdateMesh();
    }

    void GeneratePrefab()
    {
        //最初にInstantiateで全て生成してprefabArrayに格納しておく
        for (int i = 0; i < 100; i++)
        {
            GameObject prefab = Instantiate(obj);
            prefab.transform.parent = pointCloud.transform;
            //この時生成したprefabは一旦非表示状態にしておく
            prefab.SetActive(false);
            prefabList.Add(prefab);
        }
    }

    void ResetMesh()
    {
        for (int i = 0; i < prefabList.Count; i++)
        {
            prefabList[i].SetActive(false);
        }
        // cnt = 0;
        myPositions.Clear();
        myPositions.Add(new Vector3(0.0f, 0.0f, 0.0f));
        // foreach(GameObject prefab in prefabList){
        //     prefab.SetActive(false);
        //     prefabList.Remove(prefab);
        //     cnt = 0;
        // }
    }

    void Sampling()
    {
        Vector3 halfExtents = new Vector3(0.3f, 0.3f, 0.3f);

        for (int i = 0; i < prefabList.Count; i++)
        {
            if (prefabList[i].activeSelf == false)
            {
                return;
            }
            else
            {
                if (!Physics.CheckBox(pointCloud.transform.TransformPoint(prefabList[i].transform.localPosition), halfExtents, Quaternion.identity))
                {
                    prefabList[i].SetActive(false);
                }
            }
        }
    }

    void UpdateMesh()
    {
        //positions = subscriber.pcl;
        positions = subscriber.GetPCL();

        //prefabが足りないか判定する変数(追加)
        bool isPrefabEnough = false;

        // Cubeの重なり判定
        Vector3 halfExtents = new Vector3(0.025f, 0.025f, 0.025f);

        if (positions == null)
        {
            return;
        }

        if (cnt > positions.Length)
        {
            ResetMesh();
        }
        for (int i = 0; i < positions.Length; i++)
        {
            ComPosition.transform.localPosition = positions[i];
            if (!Physics.CheckBox(pointCloud.transform.TransformPoint(ComPosition.transform.localPosition), halfExtents, Quaternion.identity))
            {
                if (prefabList.Count > i)
                {
                    if (prefabList[i].activeSelf == false)
                    {
                        prefabList[i].transform.localPosition = positions[i];
                        prefabList[i].SetActive(true);
                        prefabList[i].tag = "Building";
                        myPositions.Add(positions[i]);
                        //prefabが足りているからtrueにする(追加)
                        isPrefabEnough = true;
                        // break;
                    }
                }
                else
                {
                    //もしもprefabが足りずbreakしなかった時の処理(追加)
                    GeneratePrefab();
                }
                // int isPosition = myPositions.IndexOf(positions[i]);
                // // Check if exists
                // if (isPosition < 0)
                // {
                // }
            }
        }
        Sampling();
        cnt = positions.Length;
    }

}
