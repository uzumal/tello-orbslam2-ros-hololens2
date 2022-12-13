using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Q_Right : MonoBehaviour
{
    private GameObject world1;
    private GameObject world2;
    private GameObject button;
    private GameObject Cloud1;
    private GameObject Cloud2;
    private GameObject Building;
    Finish finishScript;

    void Start()
    {
        world1 = GameObject.Find("World1");
        world2 = GameObject.Find("World2");
        button = GameObject.Find("Finish");
        Cloud1 = GameObject.Find("Cloud1");
        Cloud2 = GameObject.Find("Cloud2");
        Building = GameObject.Find("Building");
        finishScript = button.GetComponent<Finish>();
    }
    public void OnClick()
    {
        if (finishScript.cntClick == 0)
        {
            world1.transform.Rotate(new Vector3(0, 0.5f, 0));
        }
        else if (finishScript.cntClick == 1)
        {
            Cloud1.transform.Rotate(new Vector3(0, 0.5f, 0));
        }
        else if (finishScript.cntClick == 2)
        {
            world2.transform.Rotate(new Vector3(0, 0.5f, 0));
        }
        else if (finishScript.cntClick == 3)
        {
            Cloud2.transform.Rotate(new Vector3(0, 0.5f, 0));
        }
        else if (finishScript.cntClick == 4)
        {
            Building.transform.Rotate(new Vector3(0, 0.5f, 0));
        }
    }
}
