using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AutoScale : MonoBehaviour
{
    Vector3 baseScale;

    // Start is called before the first frame update
    void Start()
    {
        this.baseScale = this.transform.localScale / this.GetDistance();
    }

    void Update()
    {
        this.transform.localScale = this.baseScale * this.GetDistance();
    }

    // カメラからの距離を取得
    float GetDistance()
    {
        return (this.transform.position - Camera.main.transform.position).magnitude;
    }
}
