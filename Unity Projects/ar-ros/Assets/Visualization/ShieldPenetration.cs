using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;  // Except

public class ShieldPenetration : MonoBehaviour
{
    private GameObject drone;
    /// <summary>
    /// 今回の Update で検出された遮蔽物の Renderer コンポーネント。
    /// </summary>
    private List<Renderer> rendererHitsList_ = new List<Renderer>();

    /// <summary>
    /// Renderer コンポーネントのキャッシュ
    /// </summary>
    private List<Renderer> rendererHitsCache_ = new List<Renderer>();

    /// <summary>
    /// 前回の Update で検出された遮蔽物の Renderer コンポーネント。
    /// 今回の Update で該当しない場合は、遮蔽物ではなくなったので Renderer コンポーネントを有効にする。
    /// </summary>

    /// <summary>
    /// 遮蔽物とするレイヤーマスク。
    /// </summary>
    private int layerMask_;

    /// <summary>
    /// 半透明マテリアル
    /// </summary>
    private Material mat;

    /// <summary>
    /// デフォルトマテリアル
    /// </summary>
    private Material mat_default;

    /// <summary>
    /// Except
    /// </summary>
    private Renderer[] rendererHitsPrevs_;

    /// <summary>
    /// Sphereを出すかの判定
    /// </summary>
    private bool obst = false;

    /// <summary>
    /// 建物のMeshRenderer
    /// </summary>
    private Renderer _mesh;

    /// <summary>
    /// ドローンの位置情報保持オブジェクト
    /// </summary>
    private Vector3 prevDronePosition;

    /// <summary>
    /// ドローンの現在位置情報保持オブジェクト
    /// </summary>
    private Vector3 nowDronePosition;

    /// <summary>
    /// ユーザの現在の位置情報保持オブジェクト
    /// </summary>
    private Vector3 nowUserPosition;

    /// <summary>
    /// ユーザの過去の位置情報保持オブジェクト
    /// </summary>
    private Vector3 prevUserPosition;

    // Start is called before the first frame update
    void Start()
    {
        drone = GameObject.Find("droneModel1");
        mat = Resources.Load<Material>("Temparent_obj") as Material;
        mat_default = Resources.Load<Material>("Default") as Material;
        prevDronePosition = new Vector3(100, 100, 100);
        prevUserPosition = new Vector3(100, 100, 100);
        if (drone == null)
        {
            Debug.Log("null");
        }
        layerMask_ = 1;
    }

    // Update is called once per frame
    void Update()
    {
        // カメラと被写体を結ぶ ray を作成
        Vector3 _difference = (drone.transform.position - this.transform.position);
        Vector3 _direction = _difference.normalized;
        Ray _ray = new Ray(this.transform.position, _direction);
        Quaternion angle = new Quaternion(0f, 0f, 0f, 0f);

        // 前回の結果を退避してから、Raycast して今回の遮蔽物のリストを取得する
        // RaycastHit[] _hits = Physics.RaycastAll(_ray, _difference.magnitude, layerMask_);
        // RaycastHit[] _hits = Physics.SphereCastAll(this.transform.position, 0.03f ,_direction, _difference.magnitude, layerMask_);
        RaycastHit[] _hits = Physics.BoxCastAll(this.transform.position, Vector3.one * 0.3f, _direction, angle, _difference.magnitude, layerMask_);
        //MaskObjectのRendererコンポーネント

        rendererHitsPrevs_ = rendererHitsList_.ToArray();
        // rendererHitsCache_ = new List<Renderer>(rendererHitsList_);
        rendererHitsList_.Clear();

        nowDronePosition = drone.transform.position;
        nowUserPosition = this.transform.position;

        if (prevDronePosition != nowDronePosition | prevDronePosition != nowUserPosition)
        {
            // 遮蔽物は一時的にすべて描画機能を無効にする。
            foreach (RaycastHit _hit in _hits)
            {
                if (_hit.collider.gameObject.CompareTag("Building"))
                {
                    // 遮蔽物の Renderer コンポーネントを無効にする
                    Renderer _renderer = _hit.collider.gameObject.GetComponent<Renderer>();
                    if (_renderer != null)
                    {
                        _renderer.material = mat;
                        rendererHitsList_.Add(_renderer);
                        obst = true;
                        float distance = Vector3.SqrMagnitude(nowDronePosition - _hit.collider.gameObject.transform.position);
                        if (distance <= 0.3)
                        {
                            _renderer.material.color = new Color32(255, 0, 0, 100);
                        }
                        else if (0.3 < distance && distance <= 0.6)
                        {
                            _renderer.material.color = new Color32(255, 255, 0, 50);
                        }
                        else if (0.6 < distance && distance <= 0.9)
                        {
                            _renderer.material.color = new Color32(0, 255, 0, 10);
                        }
                        else
                        {
                            _renderer.material.color = new Color32(0, 255, 0, 0);
                        }
                    }
                }
            }
            // 前回まで対象で、今回対象でなくなったものは、表示を元に戻す。
            foreach (Renderer _renderer in rendererHitsPrevs_.Except<Renderer>(rendererHitsList_))
            {
                _renderer.material = mat_default;
                obst = false;
            }
        }

        prevDronePosition = nowDronePosition;
        prevUserPosition = nowUserPosition;

    }
}
