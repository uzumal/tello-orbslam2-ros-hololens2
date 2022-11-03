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
    private List<Transform> transformCache = new List<Transform>();
    private float seconds;


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
    void FixedUpdate()
    {
	    seconds += Time.deltaTime;
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
           //  prefabList[i].tag = "Building";
            transformCache.Add(prefabList[i].transform);
        }
    }

    void ResetMesh()
    {
        for (int i = 0; i < prefabList.Count; i++)
        {
            prefabList[i].SetActive(false);
        }
    }

    void Sampling()
    {
        Vector3 halfExtents = new Vector3(0.1f, 0.1f, 0.1f);

        for (int i = 0; i < cnt; i++)
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
        // bool isPrefabEnough = false;

        // Cubeの重なり判定
        Vector3 halfExtents = new Vector3(0.001f, 0.001f, 0.001f);

        if (positions == null)
        {
            return;
        }

        if (seconds >= 5)
        {
		    ResetMesh();
		    seconds = 0;
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
                        // transformCache[i].localPosition = positions[i];
                        prefabList[i].transform.localPosition = positions[i];
                        prefabList[i].SetActive(true);
                        cnt++;
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
        cnt = 0;
    }

}
