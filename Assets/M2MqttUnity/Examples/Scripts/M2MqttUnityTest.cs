/*
The MIT License (MIT)

Copyright (c) 2018 Giovanni Paolo Vigano'

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using uPLibrary.Networking.M2Mqtt;
using uPLibrary.Networking.M2Mqtt.Messages;
using M2MqttUnity;
using System.Globalization;

/// <summary>
/// Examples for the M2MQTT library (https://github.com/eclipse/paho.mqtt.m2mqtt),
/// </summary>
namespace M2MqttUnity.Examples
{
    /// <summary>
    /// Script for testing M2MQTT with a Unity UI
    /// </summary>
    public class M2MqttUnityTest : M2MqttUnityClient
    {
        [Tooltip("Set this to true to perform a testing cycle automatically on startup")]
        public bool autoTest = false;
        [Header("User Interface")]
        public InputField consoleInputField;
        public Toggle encryptedToggle;
        public InputField addressInputField;
        public InputField portInputField;
        public Button connectButton;
        public Button disconnectButton;
        public Button testPublishButton;
        public Button clearButton;
        public GameObject Room0BookingPanel;

        [SerializeField] GameObject Booked;
        [SerializeField] GameObject Available;
        [SerializeField] Text BookedText;
        [SerializeField] Text AvailableText;

        private List<string> eventMessages = new List<string>();
        private bool updateUI = false;

        public void TestPublish()
        {
            client.Publish("LTAQuery", System.Text.Encoding.UTF8.GetBytes("SELECT RoomName, BookedTime FROM DLabRooms WHERE BookedTime BETWEEN CURRENT_DATE() AND CURRENT_DATE()+1;"), MqttMsgBase.QOS_LEVEL_EXACTLY_ONCE, false);
            Debug.Log("Test message published");
            AddUiMessage("Test message published.");
        }

        
        public static void CallFromOtherFile(string [] bookingArr, string RMName, string date)
        {
            Debug.Log(date);   
            foreach (var item in bookingArr)
            {
                string[] splitItem = item.Split('-');
                Debug.Log("Call from MQTT " + splitItem[0]);
                DateTime dt = DateTime.Parse(splitItem[0]); // No error checking
                string timing = dt.ToString();
                string[] timingSplit = timing.Split(' ');
                
                Debug.Log("Call from MQTT " + date + " " + timingSplit[1]);
                string combineDate = date + " " + timingSplit[1];
                client.Publish("LTAQuery", System.Text.Encoding.UTF8.GetBytes("INSERT INTO DLabRooms (RoomName,Name,BookedTime) VALUES ('" + RMName + "','Jeremy','" + combineDate+"');"), MqttMsgBase.QOS_LEVEL_EXACTLY_ONCE, false);
                
            }
        }

        public void SetBrokerAddress(string brokerAddress)
        {
            if (addressInputField && !updateUI)
            {
                this.brokerAddress = brokerAddress;
            }
        }

        public void SetBrokerPort(string brokerPort)
        {
            if (portInputField && !updateUI)
            {
                int.TryParse(brokerPort, out this.brokerPort);
            }
        }

        public void SetEncrypted(bool isEncrypted)
        {
            this.isEncrypted = isEncrypted;
        }


        public void SetUiMessage(string msg)
        {
            if (consoleInputField != null)
            {
                consoleInputField.text = msg;
                updateUI = true;
            }
        }

        public void AddUiMessage(string msg)
        {
            if (consoleInputField != null)
            {
                consoleInputField.text += msg + "\n";
                updateUI = true;
            }
        }

        protected override void OnConnecting()
        {
            base.OnConnecting();
            SetUiMessage("Connecting to broker on " + brokerAddress + ":" + brokerPort.ToString() + "...\n");
            Debug.Log("Connecting to broker on " + brokerAddress + ":" + brokerPort.ToString());
        }

        protected override void OnConnected()
        {
            base.OnConnected();
            SetUiMessage("Connected to broker on " + brokerAddress + "\n");
            Debug.Log("Connected to broker on " + brokerAddress);
            if (autoTest)
            {
                TestPublish();
            }
        }

        protected override void SubscribeTopics()
        {
            client.Subscribe(new string[] { "LTAResult" }, new byte[] { MqttMsgBase.QOS_LEVEL_EXACTLY_ONCE });
            //client.Subscribe(new string[] { "M2MQTT_Unity/test" }, new byte[] { MqttMsgBase.QOS_LEVEL_EXACTLY_ONCE });
        }

        protected override void UnsubscribeTopics()
        {
            client.Unsubscribe(new string[] { "LTAResult" });
            //client.Unsubscribe(new string[] { "M2MQTT_Unity/test" });
        }

        protected override void OnConnectionFailed(string errorMessage)
        {
            AddUiMessage("CONNECTION FAILED! " + errorMessage);
        }

        protected override void OnDisconnected()
        {
            AddUiMessage("Disconnected.");
        }

        protected override void OnConnectionLost()
        {
            AddUiMessage("CONNECTION LOST!");
        }

        private void UpdateUI()
        {
            if (client == null)
            {
                if (connectButton != null)
                {
                    connectButton.interactable = true;
                    disconnectButton.interactable = false;
                    testPublishButton.interactable = false;
                }
            }
            else
            {
                if (testPublishButton != null)
                {
                    testPublishButton.interactable = client.IsConnected;
                }
                if (disconnectButton != null)
                {
                    disconnectButton.interactable = client.IsConnected;
                }
                if (connectButton != null)
                {
                    connectButton.interactable = !client.IsConnected;
                }
            }
            if (addressInputField != null && connectButton != null)
            {
                addressInputField.interactable = connectButton.interactable;
                addressInputField.text = brokerAddress;
            }
            if (portInputField != null && connectButton != null)
            {
                portInputField.interactable = connectButton.interactable;
                portInputField.text = brokerPort.ToString();
            }
            if (encryptedToggle != null && connectButton != null)
            {
                encryptedToggle.interactable = connectButton.interactable;
                encryptedToggle.isOn = isEncrypted;
            }
            if (clearButton != null && connectButton != null)
            {
                clearButton.interactable = connectButton.interactable;
            }
            updateUI = false;
        }

        protected override void Start()
        {
            SetUiMessage("Ready.");
            updateUI = true;
            base.Start();
            
        }

        protected override void DecodeMessage(string topic, byte[] message)
        {
            string msg = System.Text.Encoding.UTF8.GetString(message);
            var msgArr = msg.Split(new[] { "]]" }, StringSplitOptions.None);
            Debug.Log("Received: " + msg);
            GameObject[] roomObject = { Room0BookingPanel };
            string[] roomName = { "Maker A", "Maker B" };
            string[] timing = { "2:30PM", "3:30PM"};

            for(var a = 0; a < msgArr.Length; a++)
            {
                Debug.Log(msgArr[a]);
            }

            /*            var RM1Child = Room0BookingPanel.GetComponentsInChildren<Toggle>();
                        foreach (Toggle name in RM1Child)
                        {

                            Debug.Log(name);
                        }*/

            for (var i = 0; i < (msgArr.Length-1); i++)
            {
                for (int a = 0; a < roomName.Length; a++)
                {
                    if (msgArr[i].Contains(roomName[a]))
                    {
                        string targetName = "Room" + a + "BookingPanel";

                        var RM1Child = roomObject[a].GetComponentsInChildren<Toggle>();
                        foreach (Toggle name in RM1Child)
                        {
                            bool getout = false;
                            for (var b = 0; b < timing.Length; b++)
                            {
                                DateTime dt = DateTime.Parse(timing[b]); // No error checking
                                string dateTime = dt.ToString();
                                string[] splitTime = dateTime.Split(' ');
                                Debug.Log(splitTime[1]);
                                string target = name.ToString();
                                Debug.Log(timing[b]);
                                if (msgArr[i].Contains(splitTime[1]) && target.Contains(timing[b]))
                                {
                                    Debug.Log("i am here " + timing[b]);
                                    Text thisText = name.GetComponentInChildren<Text>();
                                    thisText.GetComponentInChildren<Text>().text = thisText.GetComponentInChildren<Text>().text + "\njeremy";
                                    Image thisImage = name.GetComponent<Image>();
                                    thisImage.enabled = true;

                                    /* Toggle thisCheckbox = name.GetComponentInChildren<Toggle>();
                                     thisCheckbox.enabled = false;*/
                                    Image thisCheckbox = name.transform.GetChild(0).GetComponent<Image>();
                                    Debug.Log(thisCheckbox);
                                    thisCheckbox.enabled = false;
                                    getout = true;
                                    break;
                                }
                                else
                                {
                                    Debug.Log("hello");
                                }
                            }
                            if(getout == true)
                            {
                                break;
                            }
                            Debug.Log(name);
                        }
                        break;
                    }
                    
                }
            }

            /*var RM1Child = Room1BookingPanel.GetComponentsInChildren<Rect>();*/
            /*            foreach(Rect name in RM1Child)
                        {
                            Debug.Log(name);
                        }*/



            /* string[] splitMsg = msgArr[i].Split(',');
             Debug.Log(splitMsg[0]);
             if(splitMsg[0].IndexOf("Maker A") >= 0 )
             {
                 string timeStamp = splitMsg[1].Substring(11, 19);
                 Debug.Log(timeStamp);
             }

             if(i == 0)
             {
                 if (msgArr[i].IndexOf("Available") >= 0)
                 {
                     Booked.gameObject.SetActive(false);
                     BookedText.gameObject.SetActive(false);
                     Available.gameObject.SetActive(true);
                     AvailableText.gameObject.SetActive(true);
                 }
                 else
                 {
                     Booked.gameObject.SetActive(true);
                     BookedText.gameObject.SetActive(true);
                     Available.gameObject.SetActive(false);
                     AvailableText.gameObject.SetActive(false);
                 }*/



            StoreMessage(msg);
            if (topic == "LTAQuery")
            {
                if (autoTest)
                {
                    autoTest = false;
                    Disconnect();
                }
            }
        }

        private void StoreMessage(string eventMsg)
        {
            eventMessages.Add(eventMsg);
        }

        private void ProcessMessage(string msg)
        {
            AddUiMessage("Received: " + msg);
            //Debug.Log("Received: " + msg);
        }

        protected override void Update()
        {
            base.Update(); // call ProcessMqttEvents()

            if (eventMessages.Count > 0)
            {
                foreach (string msg in eventMessages)
                {
                    ProcessMessage(msg);
                }
                eventMessages.Clear();
            }
            if (updateUI)
            {
                UpdateUI();
            }
        }

        private void OnDestroy()
        {
            Disconnect();
        }

        private void OnValidate()
        {
            if (autoTest)
            {
                autoConnect = true;
            }
        }
    }
}
