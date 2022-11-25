using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace RosSharp.RosBridgeClient
{
    [RequireComponent(typeof(RosConnector))]
    public class TrackSubscriber : UnitySubscriber<MessageTypes.Std.String>
    {
        private bool isMessageReceived = false;
        private GameObject trackAudio; // Textオブジェクト
        private AudioSource audioSource;

        private string isTrack;
        private bool isMsg;

        private float seconds;

        protected override void Start()
        {
            base.Start();
            trackAudio = GameObject.Find("TrackAudio");
            audioSource = trackAudio.GetComponent<AudioSource>();
        }

        private void FixedUpdate()
        {
            seconds += Time.deltaTime;

            if (isMessageReceived)
            {
                if (seconds >= 1.5)
                {
                    TrackMessage();
                    seconds = 0;
                }
            }
        }

        protected override void ReceiveMessage(MessageTypes.Std.String msg)
        {
            isMessageReceived = true;
            isTrack = msg.data;
            isMsg = true;
        }

        void TrackMessage()
        {
            if (isMsg)
            {
            
            }
            else 
            {
                if (!audioSource.isPlaying)
                    audioSource.Play();
            }
            isMsg = false;
        }
    }
}