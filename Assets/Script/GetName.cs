using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class GetName : MonoBehaviour
{
    public static string username = null;
    [SerializeField] private Text keyboardText;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    public void OnButtonPress()
    {
        Debug.Log("Enter LTAVerse");
        username = keyboardText.GetComponent<Text>().text;
        Debug.Log(username);
        SceneManager.LoadScene("SharedSubscene");
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
