using Microsoft.MixedReality.Toolkit.Utilities;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

public class NavMapping : MonoBehaviour
{
    public GameObject loc1, loc2, loc3;
    private Vector3 a, b, c;
    //private LinkedList<Vector3> anchorList = new LinkedList<Vector3>();


    public void createLine()
    {
        getVector();
        Debug.Log("Tried");
        var lineDataProvider = GetComponent<SimpleLineDataProvider>();
        lineDataProvider.SetPoint(0, a);
        lineDataProvider.SetPoint(1, b);
        var mrLineRenderer = GetComponent<MixedRealityLineRenderer>();
        mrLineRenderer.enabled = true;

        //LinkedListNode<Vector3> it = anchorList.First;
        //while (it.Next.Next != null)
        //{
        //    var lineDataProvider = GetComponent<SimpleLineDataProvider>();
        //    lineDataProvider.SetPoint(0, it.Value);
        //    lineDataProvider.SetPoint(1, it.Next.Value);
        //    var mrLineRenderer = GetComponent<MixedRealityLineRenderer>();
        //    mrLineRenderer.enabled = true;
        //    Debug.Log("1" + it.Value);
        //    Debug.Log("2" + it.Next.Value);
        //}
    }

    public void getVector()
    {
        a = loc1.transform.position;
        b = loc2.transform.position;
        //c = loc3.transform.position;
        //anchorList.AddFirst(a);
        //LinkedListNode<Vector3> current = anchorList.Find(a);
        //anchorList.AddAfter(current, b);
        //current = anchorList.Find(b);
        //anchorList.AddAfter(current, c);
        //LinkedListNode<Vector3> it = anchorList.First;
        //Debug.Log(it.Value);
        //it = it.Next;
        //Debug.Log(it.Value);
        //it = it.Next;
        //Debug.Log(it.Value);


    }
}
