using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Down : MonoBehaviour
{
    private GameObject drone;
    private GameObject button;
    private GameObject Cloud;
    Finish finishScript;

    void Start()
    {
        drone = GameObject.Find("World");
        button = GameObject.Find("Finish");
        Cloud = GameObject.Find("Cloud1");
        finishScript = button.GetComponent<Finish>();
    }

    // var cameraForward = Vector3.Scale(Camera.main.transform.forward, new Vector3(1, 0, 1)).normalized;
    public void OnClick()
    {
        if (finishScript.cntClick == 0)
        {
            drone.transform.position += new Vector3(0, -0.05f, 0);
        }
        else
        {
            Cloud.transform.localPosition += new Vector3(0, -0.05f, 0);
        }
    }
}
