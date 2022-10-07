using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Finish : MonoBehaviour
{
    private GameObject button;

    void Start()
    {
        button = GameObject.Find("PressableButton1");
    }

    public void OnClick()
    {
        // var cameraForward = Vector3.Scale(Camera.main.transform.forward, new Vector3(1, 0, 1)).normalized;
        // Vector3 direction = cameraForward * 0.1f + Camera.main.transform.right * 0;
        button.gameObject.SetActive(false);
    }
}
