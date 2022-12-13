using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class activeFalse : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {

    }

    void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("drone"))
        {
            this.gameObject.SetActive(false);
        }
    }
}
