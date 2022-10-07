using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Left : MonoBehaviour
{
    private GameObject drone;

    void Start()
    {
        drone = GameObject.Find("World");
    }

    // var cameraForward = Vector3.Scale(Camera.main.transform.forward, new Vector3(1, 0, 1)).normalized;
    public void OnClick()
    {
        // var cameraForward = Vector3.Scale(Camera.main.transform.forward, new Vector3(1, 0, 1)).normalized;
        // Vector3 direction = cameraForward * 0.1f + Camera.main.transform.right * 0;
        drone.transform.position += new Vector3(-0.05f, 0, 0);
    }
}
