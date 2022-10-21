using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Finish : MonoBehaviour
{
    private GameObject button;
    private GameObject drone1;
    private GameObject Cloud1;

    void Start()
    {
        button = GameObject.Find("PressableButton1");
        drone1 = GameObject.Find("Drone1");
        Cloud1 = GameObject.Find("Cloud1");
    }

    public void OnClick()
    {
        // var cameraForward = Vector3.Scale(Camera.main.transform.forward, new Vector3(1, 0, 1)).normalized;
        // Vector3 direction = cameraForward * 0.1f + Camera.main.transform.right * 0;
        button.gameObject.SetActive(false);
        Cloud1.transform.localPosition = drone1.transform.localPosition;
    }
}
