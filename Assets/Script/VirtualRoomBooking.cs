using M2MqttUnity.Examples;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class VirtualRoomBooking : MonoBehaviour
    
{
    public GameObject Room1Booking;
    public Component[] RM1Child;
    public GvrDropdown Date;
    public GvrDropdown Month;
    public GvrDropdown Year;
    // Start is called before the first frame update
    void Start()
    {
        //var child = Room1Booking.GetComponentInChildren<Toggle>();
        // Debug.Log(child);


        /*test = Room1Booking.GetComponentsInChildren<Toggle>();

        foreach (Toggle joint in test)
            Debug.Log(joint.isOn);*/
    }

    public void SubmitRM1Click()
    {
        List<string> bookingList = new List<string>();

        RM1Child = Room1Booking.GetComponentsInChildren<Toggle>();
        foreach (Toggle checkbox in RM1Child)
        {
            if (checkbox.isOn == true)
            {
                /*Debug.Log(checkbox.ToString());*/
                bookingList.Add(checkbox.ToString());
                
            }
            
            
        }
        string[] bookingArr = bookingList.ToArray();
        foreach (var item in bookingArr)
        {
            Debug.Log(item);

        }
        Debug.Log(Date.options[Date.value].text);
        string monthNumber = "00";
        switch (Month.options[Month.value].text)
        {
            case "Jan":
                monthNumber = "01";
                break;
            case "Feb":
                monthNumber = "02";
                break;
            case "Mar":
                monthNumber = "03";
                break;
            case "Apr":
                monthNumber = "04";
                break;
            case "May":
                monthNumber = "05";
                break;
            case "Jun":
                monthNumber = "06";
                break;
            case "Jul":
                monthNumber = "07";
                break;
            case "Aug":
                monthNumber = "08";
                break;
            case "Sept":
                monthNumber = "09";
                break;
            case "Oct":
                monthNumber = "10";
                break;
            case "Nov":
                monthNumber = "11";
                break;
            case "Dec":
                monthNumber = "12";
                break;
        }
        string combineDate = Year.options[Year.value].text + "-" + monthNumber + "-" + Date.options[Date.value].text;
        M2MqttUnityTest.CallFromOtherFile(bookingArr, "Maker A", combineDate);
    }


    // Update is called once per frame
    void Update()
    {
        
    }
}
