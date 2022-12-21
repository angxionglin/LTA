using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class Information : MonoBehaviour
{
    [SerializeField] private Image myInformationImage;
    [SerializeField] private Text myInformationText;
    [SerializeField] private Text ClickMe;
    [SerializeField] private Button DoneButton;

    public void InformationClick()
    {
        myInformationImage.gameObject.SetActive(false);
        ClickMe.gameObject.SetActive(false);
        myInformationText.gameObject.SetActive(true);
        DoneButton.gameObject.SetActive(true);
        Debug.Log("click");
    }

    public void InformationClose()
    {
        myInformationImage.gameObject.SetActive(true);
        ClickMe.gameObject.SetActive(true);
        myInformationText.gameObject.SetActive(false);
        DoneButton.gameObject.SetActive(false);
        Debug.Log("Close");
    }
}
