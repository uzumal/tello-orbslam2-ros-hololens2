using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using RosSharp.RosBridgeClient;

public class PointCubeRenderer : MonoBehaviour
{
    public PointCloudSubscriber subscriber;
    public DownCloudSubscriber subscriber1;

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

    private GameObject button;
    Finish finishScript;

    bool isCalledOnce = false;

    public LayerMask m_LayerMask;


    void Start()
    {
        pointCloud = GameObject.Find("PointCloud1");
        obj = (GameObject)Resources.Load("Point");
        ComPosition = Instantiate(obj);
        ComPosition.transform.parent = pointCloud.transform;
        ComPosition.SetActive(false);
        myPositions.Add(new Vector3(0.0f, 0.0f, 0.0f));
        cnt = 0;
        // InvokeRepeating("ResetMesh", 10.0f, 10.0f);
        button = GameObject.Find("Finish");
        finishScript = button.GetComponent<Finish>();
        GeneratePrefab();
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if (finishScript.cntClick == 5)
        {
            if (!isCalledOnce)
            {
                isCalledOnce = true;
                for (int i = 0; i < prefabList.Count; i++)
                {
                    Destroy(prefabList[i]);
                }
            }
            VisualizeMesh();
        }
        else
        {
            seconds += Time.deltaTime;
            UpdateMesh();
        }
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
        Vector3 halfExtents = new Vector3(0.2f, 0.2f, 0.2f);

        for (int i = 0; i < cnt; i++)
        {
            if (prefabList[i].activeSelf == false)
            {
                return;
            }
            else
            {
                if (!Physics.CheckBox(prefabList[i].transform.position, halfExtents, Quaternion.identity))
                {
                    prefabList[i].SetActive(false);
                }
            }
        }
    }

    void UpdateMesh()
    {
        //positions = subscriber.pcl;
        if (finishScript.cntClick >= 2)
        {
            positions = subscriber1.GetPCL();
        }
        else{
            positions = subscriber.GetPCL();
        }

        //prefabが足りないか判定する変数(追加)
        // bool isPrefabEnough = false;

        // Cubeの重なり判定
        Vector3 halfExtents = new Vector3(0.01f, 0.01f, 0.01f);

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
            if (!Physics.CheckBox(ComPosition.transform.position, halfExtents, Quaternion.identity))
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

    void VisualizeMesh()
    {
        Vector3 halfExtents = new Vector3(0.1f, 0.1f, 0.1f);

        positions = subscriber1.GetPCL();
        if (positions == null)
        {
            return;
        }
        for (int i = 0; i < positions.Length; i++)
        {
            ComPosition.transform.localPosition = positions[i];
            if (!Physics.CheckBox(ComPosition.transform.position, halfExtents, Quaternion.identity, m_LayerMask))
            {
                Collider[] _hits = Physics.OverlapBox(ComPosition.transform.position, Vector3.one * 0.5f);
                foreach (Collider _hit in _hits)
                {
                    Renderer _renderer = _hit.gameObject.GetComponent<Renderer>();
                    if (_hit.gameObject.CompareTag("noVisualize"))
                    {
                        _renderer.material.color = new Color32(255, 255, 255, 255);
                        _hit.gameObject.tag = "Building";
                        _hit.gameObject.layer = 0;
                    }
                }
            }
        }
    }

}
