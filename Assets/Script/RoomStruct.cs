using Firebase.Firestore;

[FirestoreData]
public struct RoomStruct 
{
   [FirestoreProperty]
   public string status { get; set; }
}
