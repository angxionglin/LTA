using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Net;
using System.Threading;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
using System.Net.Sockets;

public class SQLManager : MonoBehaviour
{


    // Start is called before the first frame update
    [SerializeField] GameObject Booked;
    [SerializeField] GameObject Available;
    [SerializeField] Text BookedText;
    [SerializeField] Text AvailableText;




    public void RefreshStatus()
    {
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
                else if (i == 1)
                {

                }
                else if (i == 2)
                {

                }
            }
            //Debug.Log(result.roomID);



        }));
    }



    

        void Start()
    {


        StartCoroutine(GetText("https://script.google.com/macros/s/AKfycbx4Uj8efa2Ji-6RHQRvNPe9Xjh1MBdyamXv835bBNmGtn7oTE2K_ywJP5GAMBsLRrUV8g/exec", (result) => {
            Debug.Log(result); // this log function is never logging a value.. Why is this?
            string[] fullData = result.Split(',');
            for(var i = 0; i<fullData.Length; i++)
            {
                Debug.Log(fullData[i]);
                if(i == 0)
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
                else if(i == 1)
                {

                }
                else if(i == 2)
                {

                }
            }
            //Debug.Log(result.roomID);
            


        }));
    }



   

    // Update is called once per frame
    void Update()
    {
       /** StartCoroutine(GetText("https://script.google.com/macros/s/AKfycbwR8WO4wifDMq9A4KaLdJ5PzDhLt3IAqhyDVY4jROJWyVIKzZCrPTady83umiQBvkpuuw/exec", (result) => {
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
                else if (i == 1)
                {

                }
                else if (i == 2)
                {

                }
            }
            //Debug.Log(result.roomID);



        }));**/
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
   
}
