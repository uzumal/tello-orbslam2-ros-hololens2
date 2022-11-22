/*
© Siemens AG, 2017-2018
Author: Dr. Martin Bischoff (martin.bischoff@siemens.com)

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
<http://www.apache.org/licenses/LICENSE-2.0>.
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

using UnityEngine;

namespace RosSharp.RosBridgeClient
{
    public class PoseStampedSubscriber : UnitySubscriber<MessageTypes.Geometry.PoseStamped>
    {
        public Transform PublishedTransform;
        private GameObject Parent;

        private Vector3 position;
        private Quaternion rotation;
        private bool isMessageReceived;

        private int cnt;
        private float startPositionX;
        private float startPositionZ;

        protected override void Start()
        {
            cnt = 0;
            //             Parent = (GameObject)Resources.Load ("Drone1");
            //             PublishedTransform.transform.parent = Parent.transform;
            base.Start();
        }

        private void Update()
        {
            if (isMessageReceived)
                ProcessMessage();
        }

        protected override void ReceiveMessage(MessageTypes.Geometry.PoseStamped message)
        {
            position = GetPosition(message).Ros2Unity();
            rotation = GetRotation(message).Ros2Unity();
            isMessageReceived = true;
        }

        private void ProcessMessage()
        {
            PublishedTransform.localPosition = position;
            Vector3 pos = PublishedTransform.localPosition;
            pos.y -= 0.01f;
            PublishedTransform.localRotation = rotation;
            PublishedTransform.localRotation = Quaternion.Euler(0.0f, PublishedTransform.localRotation.eulerAngles.y, 0.0f);

        }

        private Vector3 GetPosition(MessageTypes.Geometry.PoseStamped message)
        {
            float _disNum = 3.0f;
            return new Vector3(
                (float)message.pose.position.x * _disNum,
                (float)message.pose.position.y * _disNum,
                (float)message.pose.position.z * _disNum);
        }

        private Quaternion GetRotation(MessageTypes.Geometry.PoseStamped message)
        {
            return new Quaternion(
                (float)message.pose.orientation.x,
                (float)message.pose.orientation.y,
                (float)message.pose.orientation.z,
                (float)message.pose.orientation.w);
        }
    }
}