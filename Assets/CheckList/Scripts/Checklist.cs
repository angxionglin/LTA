using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using UnityEngine.UI;
using Microsoft.MixedReality.Toolkit.UI;
using TMPro;
using Microsoft.MixedReality.Toolkit.Utilities;
using System.Timers;

namespace Microsoft.MixedReality.OpenXR.BasicSample
{
    public class Checklist : MonoBehaviour
    {

        float m_LastPressTime;
        float m_PressDelay = 2f;
        /// <summary>
        /// File path for the downloaded todo lists
        /// </summary>
        string filePath;

        /// <summary>
        /// List of all the file names
        /// </summary>
        List<string> allFiles = new List<string>();

        /// <summary>
        /// Prefab for to create new CheckList Menu
        /// </summary>
        public GameObject todoListPrefab;

        /// <summary>
        /// Parent of All Todo Lists
        /// </summary>
        public Transform menu;

        /// <summary>
        /// Open Check List button
        /// </summary>
        public GameObject openButtonPrefab;

        /// <summary>
        /// Creates a menu filled with the preconfigured checklists
        /// </summary>
        public Transform allTodoListManager;

        /// <summary>
        /// Spacing between the Todo List buttons
        /// </summary>
        private int yCoord = 0;

        /// <summary>
        /// Runs when the Scene is loaded
        /// </summary>
        void Start()
        {

            filePath = Application.persistentDataPath + "/checklists/checklists";
            string[] files = System.IO.Directory.GetFiles(filePath);
            foreach (string file in files)
            {
                allFiles.Add(System.IO.Path.GetFileName(file));
            }
            CreateMenu();
        }

        /// <summary>
        /// Creates a menu filled with the preconfigured checklists
        /// </summary>
        public void CreateMenu()
        {
            for (int i=0; i<allFiles.Count; i++)
            {
                string filename = allFiles[i];
                GameObject item = Instantiate(openButtonPrefab);
                Debug.Log(allFiles[i]);
                item.transform.SetParent(menu);
                item.transform.localScale = new Vector3(0.9560533f, 0.9295349f, 1);
                item.transform.localPosition = new Vector3(0.067f, -0.015f - yCoord*0.04f, 0);
                yCoord++;
                item.transform.localRotation = Quaternion.Euler(0, 0, 0);
                string showFile = filename.Remove(filename.Length - 4);
                item.GetComponentInChildren<TextMeshPro>().text = showFile;
                item.GetComponentInChildren<Interactable>().OnClick.AddListener(delegate
                {
                    OpenTodo(filename);
                });
                
            }
        }

        /// <summary>
        /// Opens the speific checklist clicked by utilising the ChecklistManager
        /// </summary>
        void OpenTodo(string filename)
        {
            if (GameObject.Find(filename) == null)
            {
                //StartCoroutine(EnableButtonAfterDelay(TheButton, 2f));
                GameObject todoList = Instantiate(todoListPrefab);
                todoList.name = filename;
                todoList.transform.SetParent(allTodoListManager);
                todoList.GetComponentInChildren<ClippingBox>().enabled = true;
                ChecklistManager todoListManager = todoList.GetComponentInChildren<ChecklistManager>();
                
                todoListManager.SetFileName(filename);
                todoListManager.Creation();
                ChecklistManager temp = todoListManager;

            }
        }

    }
}
