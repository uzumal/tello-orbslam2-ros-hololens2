using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace RosSharp.RosBridgeClient
{
    public class CollisionMsg : UnityPublisher<MessageTypes.Std.String>
    {
        private int cnt;

        private MessageTypes.Std.String message;

        private GameObject collisionAudio; // Textオブジェクト

        private AudioSource audioSource;

        protected override void Start()
        {
            base.Start();
            message = new MessageTypes.Std.String
            {
                data = "Near by Danger"
            };
            collisionAudio = GameObject.Find("CollisionAudio");
            audioSource = collisionAudio.GetComponent<AudioSource>();
        }

        void OnTriggerEnter(Collider other)
        {
            if (other.CompareTag("Building"))
            {
                cnt++;
                if (cnt >= 1)
                {
                    Publish(message);
                    if(!audioSource.isPlaying)
                        audioSource.Play();
                }
            }
        }

        void OnTriggerExit(Collider other)
        {
            if (other.CompareTag("Building"))
            {
                cnt--;
            }
        }
    }
}
