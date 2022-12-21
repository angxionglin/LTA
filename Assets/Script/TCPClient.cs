using UnityEngine;
using System.Collections;
using System;
using UnityEngine.UI;
using UnityEngine.Networking;
using WebSocketSharp;
using System.Collections.Generic;
using System.IO;
using System.Net;
using System.Threading;
using System.Net.Sockets;

public class TCPClient : MonoBehaviour
{
    public WebSocket ws;
    [SerializeField] GameObject Booked;
    [SerializeField] GameObject Available;
    [SerializeField] Text BookedText;
    [SerializeField] Text AvailableText;
    private void Start()
    {
        ws = new WebSocket("wss://backendsql.onrender.com/");
        //ws = new WebSocket("ws://localhost:8080");
        ws.SslConfiguration.EnabledSslProtocols = System.Security.Authentication.SslProtocols.Tls12;

        Debug.Log("Initial State : " + ws.ReadyState);

        ws.Connect();
        ws.OnMessage += (sender, e) =>
        {
            getGoogleData();
            Debug.Log("Message Received from " + ((WebSocket)sender).Url + ", Data : " + e.Data);
            
        };

        ws.OnOpen += (sender, e) =>
        {
            Debug.Log("opening");
            ws.Send("Hello");
        };

    }

    public void getGoogleData()
    {
        Debug.Log("i am at google Data");
        StartCoroutine(GetText("https://script.google.com/macros/s/AKfycbx4Uj8efa2Ji-6RHQRvNPe9Xjh1MBdyamXv835bBNmGtn7oTE2K_ywJP5GAMBsLRrUV8g/exec", (result) => {
            Debug.Log(result); // this log function is never logging a value.. Why is this?
            string[] fullData = result.Split(',');
            for (var i = 0; i < fullData.Length; i++)
            {
                Debug.Log(fullData[i]);
                if (i == 0)
                {
                    if (fullData[i].IndexOf("Available") >= 0)
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
                    }
                }
            }
        }));
    }

    IEnumerator GetText(string url, Action<string> result)
    {
        UnityWebRequest www = UnityWebRequest.Get(url);
        yield return www.SendWebRequest();

        if (www.isNetworkError || www.isHttpError)
        {
            Debug.Log(www.error);
            if (result != null)
                result(www.error);
        }
        else
        {
            //Debug.Log(www.downloadHandler.data); // this log is returning the requested data. 
            if (result != null)
                result(www.downloadHandler.text);
            // RoomInfo.CreateFromJSON(www.downloadHandler.text.ToString());
        }
 }


private void Update()
    {
        if (ws == null)
        {
            Debug.Log('e');
            return;
        }
        if (Input.GetKeyDown(KeyCode.Space))
        {
            Debug.Log("sending");
            ws.Send("Hello");
        }
        if (Input.GetKeyDown(KeyCode.UpArrow))
        {
            Debug.Log("getData");
            getGoogleData();
        }
    }
}