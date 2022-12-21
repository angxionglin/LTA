using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Firebase.Firestore;
using Firebase.Extensions;

public class DatabaseManager : MonoBehaviour
{
    // Start is called before the first frame update
    //[SerializeField] Canvas Booked;
   // [SerializeField] Canvas Available;
    //[SerializeField] Text BookedText;
    //[SerializeField] Text AvailableText;

    FirebaseFirestore db;
    void Start()
    {
        db = FirebaseFirestore.DefaultInstance;

        GetData();

    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void GetData()
    {

        db.Collection("DLabRoom").Document("DLabRm1").GetSnapshotAsync().ContinueWithOnMainThread(task =>
        {
            RoomStruct counter = task.Result.ConvertTo<RoomStruct>();
            Debug.Log(counter.status.ToString());
        });
    }
}
