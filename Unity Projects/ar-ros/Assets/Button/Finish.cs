using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI;
using RosSharp.RosBridgeClient;

public class Finish : MonoBehaviour
{
    private GameObject button;
    private GameObject World;
    private GameObject obj;
    private GameObject Building;
    private GameObject pointcloud1;
    private GameObject pointcloud2;
    private MeshRenderer p_MeshRenderer;
    private ButtonConfigHelper buttonConfigHelper;
    public int cntClick;
    private Vector3[] positions = new Vector3[] { new Vector3(0, 0, 0), new Vector3(0, 1, 0), new Vector3(0, 2, 2), new Vector3(2, 1, 0), new Vector3(3, 1, 0) };

    void Start()
    {
        button = GameObject.Find("PressableButton1");
        buttonConfigHelper = this.GetComponent<ButtonConfigHelper>();
        cntClick = 0;
        World = GameObject.Find("World1");
        Building = GameObject.Find("Building");
        pointcloud1 = GameObject.Find("PointCloudSub1");
        pointcloud2 = GameObject.Find("PointCloudSub2");
        obj = (GameObject)Resources.Load("target");
        p_MeshRenderer = Building.GetComponent<MeshRenderer>();
        Invoke("Activate", 5);
        // Building.gameObject.SetActive(false);
    }

    void Activate()
    {
        Building.SetActive(false);
    }

    void GeneratePrefab()
    {
        //最初にInstantiateで全て生成してprefabArrayに格納しておく
        for (int i = 0; i < 5; i++)
        {
            GameObject prefab = Instantiate(obj);
            prefab.transform.parent = World.transform;
            //この時生成したprefabは一旦非表示状態にしておく
            prefab.SetActive(true);
            prefab.transform.localPosition = positions[i];
        }
    }

    private void OnApplicationQuit()
    {
        p_MeshRenderer.sharedMaterial.color = new Color32(255, 255, 255, 255);
    }

    public void OnClick()
    {
        // var cameraForward = Vector3.Scale(Camera.main.transform.forward, new Vector3(1, 0, 1)).normalized;
        // Vector3 direction = cameraForward * 0.1f + Camera.main.transform.right * 0;
        if (cntClick == 4)
        {
            // GeneratePrefab();
            button.gameObject.SetActive(false);
            p_MeshRenderer.sharedMaterial.color = new Color32(255, 255, 255, 0);
        }
        else if (cntClick == 3)
        {
            Building.SetActive(true);
            pointcloud2.GetComponent<PointCloudSubscriber2>().enabled = false;
            pointcloud2.GetComponent<DownCloudSubscriber2>().enabled = true;
            buttonConfigHelper.MainLabelText = "Building Finish";
        }
        else if (cntClick == 2)
        {
            buttonConfigHelper.MainLabelText = "Cloud2 Finish";
        }
        else if (cntClick == 1)
        {
            pointcloud1.GetComponent<PointCloudSubscriber>().enabled = false;
            pointcloud1.GetComponent<DownCloudSubscriber>().enabled = true;
            buttonConfigHelper.MainLabelText = "Drone2 Finish";
        }
        else if (cntClick == 0)
        {
            buttonConfigHelper.MainLabelText = "Cloud1 Finish";
        }
        cntClick++;
    }
}
