using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using RosSharp.RosBridgeClient;

public class UpdatePoint : MonoBehaviour
{
    public PointCloudSubscriber subscriber;
    
    private GameObject drone;
    private GameObject pointCloud;
    private GameObject obj;
    // GetPCL
    private Vector3[] positions = new Vector3[] { new Vector3(0, 0, 0), new Vector3(0, 1, 0) };
    // List of generating prefab's transform
    private List<Vector3> myPositions = new List<Vector3>();
    // List of generating prefab
    private List<GameObject> prefabList = new List<GameObject>();
    // prefabカウント
    // private int cnt;

    void Start()
    {
        drone = GameObject.Find("droneModel");
        pointCloud = GameObject.Find("PointCloud1");
        obj = (GameObject)Resources.Load ("Point");
        myPositions.Add (new Vector3 (0.0f, 0.0f, 0.0f));
        // cnt = 0;
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
        for(int i = 0; i < 1000; i++)
        {
            GameObject prefab = Instantiate(obj);
            prefab.transform.parent = pointCloud.transform;
            //この時生成したprefabは一旦非表示状態にしておく
            prefab.SetActive(false);
            prefabList.Add(prefab);
        }
    }


    void UpdateMesh()
    {
        //positions = subscriber.pcl;
        positions = subscriber.GetPCL();

        // Cubeの重なり判定
        Vector3 halfExtents = new Vector3(0.05f, 0.05f, 0.05f);

        int cnt = 0;

        if (positions == null)
        {
            return;
        }
        for(int i = 0; i < positions.Length; i++){
            // int isPosition = myPositions.IndexOf(positions[i]);
            if (!Physics.CheckBox(positions[i], halfExtents, Quaternion.identity)){
                // Check if exists
                // if(isPosition < 0){
                    if(i >= prefabList.Count){
                        if (prefabList[i].activeSelf == false)
                        {
                            // prefabList[i].transform.parent = pointCloud.transform;
                            // Debug.Log(positions[i]);
                            prefabList[i].transform.position = positions[i];
                            prefabList[i].SetActive(true);
                            myPositions.Add (positions[i]);
                            // cnt++;
                            break;
                        }else
                        {
                            Debug.Log(i + "番目: " + prefabList[cnt].transform.position + " ▶️ " + positions[i]);
                            prefabList[i].transform.position = positions[i];
                            myPositions.Add (positions[i]);
                            // cnt++;
                            break;
                        }
                    }else{
                        //もしもprefabが足りずbreakしなかった時の処理(追加)
                        GeneratePrefab();
                    }
                // }
            }
        }
    }

}
