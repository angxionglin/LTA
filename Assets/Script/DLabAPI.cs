using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DLabAPI : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] private MeshRenderer Available;
    [SerializeField] private MeshRenderer Booked;
    [SerializeField] private Text DescriptionOfBooked;
    [SerializeField] private Text DescriptionOfAvailable;
    void Start()
    {
        APICall();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void APICall()
    {
        Available.gameObject.SetActive(false);
        Booked.gameObject.SetActive(false);
        DescriptionOfAvailable.gameObject.SetActive(false);
        DescriptionOfBooked.gameObject.SetActive(false);
        Debug.Log("run APICall");
    }
}
