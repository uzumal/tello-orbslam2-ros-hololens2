using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VisualizeMonitor : MonoBehaviour
{
    public GameObject monitor;
    public GameObject monitor_obj;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    void OnTriggerStay(Collider other)
    {
        if (other.CompareTag("drone"))
        {
            if (monitor_obj.CompareTag("Building")){
                if (monitor.gameObject.activeSelf == false)
                {
                    monitor.SetActive(true);
                }
            }
        }
    }
}
