using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using RosSharp.RosBridgeClient;

public class reconstruction : MonoBehaviour
{
    public PointCloudSubscriber subscriber;
    private Vector3[] positions = new Vector3[] { new Vector3(0, 0, 0), new Vector3(0, 1, 0) };

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        positions = subscriber.GetPCL();
        if (positions == null)
        {
            return;
        }
        for (int i = 0; i < positions.Length; i++)
        {
            RaycastHit[] _hits = Physics.BoxCastAll(positions[i], Vector3.one * 0.1f, Vector3.one * 0.01f);
            foreach (RaycastHit _hit in _hits)
            {
                Renderer _renderer = _hit.collider.gameObject.GetComponent<Renderer>();
                Debug.Log("position:" + _hit.collider.gameObject);
                if (_hit.collider.gameObject.CompareTag("Building"))
                {
                    _renderer.material.color = new Color32(255, 255, 255, 255);
                }
            }
        }
    }
}
