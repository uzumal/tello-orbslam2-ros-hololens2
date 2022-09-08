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
        obj = (GameObject)Resources.Load ("Point");
        myPositions.Add (new Vector3 (0.0f, 0.0f, 0.0f));
        cnt = 0;
        GeneratePrefab();
    }

    // Update is called once per frame
    void Update()
    { 
        UpdateMesh();
        Invoke("ResetMesh", 10);
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

    void ResetMesh()
    {
        for(int i = 0; i < prefabList.Count; i++){
            prefabList[i].SetActive(false);
            cnt = 0;
        }
        myPositions.Clear();
        myPositions.Add (new Vector3 (0.0f, 0.0f, 0.0f));
        // foreach(GameObject prefab in prefabList){
        //     prefab.SetActive(false);
        //     prefabList.Remove(prefab);
        //     cnt = 0;
        // }
    }


    void UpdateMesh()
    {
        //positions = subscriber.pcl;
        positions = subscriber.GetPCL();

        //prefabが足りないか判定する変数(追加)
        bool isPrefabEnough = false;

        // Cubeの重なり判定
        Vector3 halfExtents = new Vector3(0.05f, 0.05f, 0.05f);

        if (positions == null)
        {
            return;
        }
        for(int i = 0; i < positions.Length; i++){
            if (!Physics.CheckBox(positions[i], halfExtents, Quaternion.identity)){
                int isPosition = myPositions.IndexOf(positions[i]);
                // Check if exists
                if(isPosition < 0){
                    if(prefabList.Count > cnt){
                        if (prefabList[cnt].activeSelf == false)
                        {
                            prefabList[cnt].transform.position = positions[i];
                            prefabList[cnt].SetActive(true);
                            myPositions.Add (positions[i]);
                            //prefabが足りているからtrueにする(追加)
                            isPrefabEnough = true;
                            cnt++;
                            break;
                        }
                    }else{
                        //もしもprefabが足りずbreakしなかった時の処理(追加)
                        GeneratePrefab();
                    }
                }
            }
        }
    }

}
