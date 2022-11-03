using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI;

public class Finish : MonoBehaviour
{
    private GameObject button;
    private GameObject World;
    private ButtonConfigHelper buttonConfigHelper;
    public int cntClick;


    void Start()
    {
        button = GameObject.Find("PressableButton1");
        // buttonConfigHelper = this.GetComponent<ButtonConfigHelper>();
        cntClick = 0;
    }

    public void OnClick()
    {
        // var cameraForward = Vector3.Scale(Camera.main.transform.forward, new Vector3(1, 0, 1)).normalized;
        // Vector3 direction = cameraForward * 0.1f + Camera.main.transform.right * 0;
        if (cntClick > 0)
        {
            button.gameObject.SetActive(false);
        }
        buttonConfigHelper.MainLabelText = "Cloud Finish";
        cntClick++;
    }
}
