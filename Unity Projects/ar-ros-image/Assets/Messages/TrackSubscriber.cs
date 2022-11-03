using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace RosSharp.RosBridgeClient
{
    [RequireComponent(typeof(RosConnector))]
    public class TrackSubscriber : UnitySubscriber<MessageTypes.Std.String>
    {
        private bool isMessageReceived = true;
        private GameObject trackText; // Textオブジェクト
        private Text trackLost;

        private string isTrack;

        protected override void Start()
        {
            trackText = GameObject.Find("trackText");
            trackLost = trackText.GetComponent<Text>();
            base.Start();
        }

        private void Update()
        {
            if (isMessageReceived)
            {
                TrackMessage();
            }
            else
            {
                trackLost.color = new Color(1.0f, 0.0f, 0.0f, 1.0f);
                trackLost.text = "TRACK LOST\nPLEASE STOP AND LOOK  AROUND SLOWLY";
            }
        }

        protected override void ReceiveMessage(MessageTypes.Std.String msg)
        {
            isMessageReceived = true;
            isTrack = msg.data;
        }

        void TrackMessage()
        {
            if (isTrack == "track exists")
            {
                trackLost.color = new Color(0.0f, 0.0f, 0.0f, 1.0f);
                trackLost.text = "MAPPING NOW";
            }
            else
            {
                trackLost.color = new Color(1.0f, 0.0f, 0.0f, 1.0f);
                trackLost.text = "TRACK LOST\nPLEASE STOP AND LOOK  AROUND SLOWLY";
            }
        }
    }
}