using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Q_Left : MonoBehaviour
{
    private GameObject drone;

    void Start()
    {
        drone = GameObject.Find("World");
    }
    public void OnClick()
    {
        // var cameraForward = Vector3.Scale(Camera.main.transform.forward, new Vector3(1, 0, 1)).normalized;
        // Vector3 direction = cameraForward * 0 + Camera.main.transform.right * -0.1f;
        // build.transform.position += direction;
        drone.transform.Rotate(new Vector3(0, -0.5f, 0));
    }
}