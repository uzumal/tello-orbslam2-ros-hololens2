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

        protected override void Start()
        {
            trackText = GameObject.Find("trackText");
            Text trackLost = trackText.GetComponent<Text> ();
            base.Start();
        }
        
        private void Update()
        {
            if (isMessageReceived == false)
            {
                return;
            }
        }

        protected override void ReceiveMessage(MessageTypes.Std.String msg)
        {
            isMessageReceived = true;
            //Debug.Log("ReceiveMessage : " + msg.data);
            string data = msg.data;
            string value = data.Split(':')[1].Trim();
            Debug.Log(value);
            // trackがlostした際にユーザ画面に警告表示
            trackLost.text = "Hello";
        }
    }
}