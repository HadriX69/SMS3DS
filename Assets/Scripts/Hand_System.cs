using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.N3DS;

public class Hand_System : MonoBehaviour {
    [Header("Hand Variables")]
    // Hand Variables
    [SerializeField] private Transform Hand_Transform;
    private bool Is_Holding = false;
    private GameObject Hand_Content;
    private string Hand_Content_ID = null;
    [Header("Furnitures Mesh")]
    // Shelf Mesh
    [SerializeField] private GameObject Shelf;
    // Fridge Mesh
    [SerializeField] private GameObject Fridge;
    [Header("Furnitures Texture")]
    // Build Texture
    [SerializeField] private Material Build_Tex;
    // Shelf Texture
    [SerializeField] private Material Shelf_Tex;
    // Fridge Texture
    [SerializeField] private Material Fridge_Tex;
    [Header("Furnitures Transform")]
    // Shelf Transform
    [SerializeField] private Transform Shelf_T;
    // Fridge Transform
    [SerializeField] private Transform Fridge_T;

    void Start () 
	{
        // Setup Furnitures
        //Shelf
        Shelf_T.transform.localScale = new Vector3(2.5f, 5f, 230f);
        Shelf.GetComponent<Renderer>().material = Build_Tex;
        //Fridge
        Fridge_T.transform.localScale = new Vector3(266.5f, 266.5f, 266.5f);
        Fridge.GetComponent<Renderer>().material = Build_Tex;
    }

    public void Select_Shelf()
    {
        if (Hand_Content != null)
        {
            Destroy(Hand_Content);
        }
        Hand_Content_ID = "Shelf";
        Hand_Content = Instantiate(Shelf, Hand_Transform.position + new Vector3(1f, 0f, 0f), Shelf_T.rotation);
        Hand_Content.transform.SetParent(Hand_Transform);
        Is_Holding = true;
    }

    public void Select_Fridge()
    {
        if (Hand_Content != null)
        {
            Destroy(Hand_Content);
        }
        Hand_Content_ID = "Fridge";
        Hand_Content = Instantiate(Fridge, Hand_Transform.position + new Vector3(0f, -1.55f, 0f), Fridge_T.rotation);
        Hand_Content.transform.SetParent(Hand_Transform);
        Is_Holding = true;
    }

    private void Place_Furniture()
    {
        if (Hand_Content_ID == "Shelf")
        {
            GameObject New_Shelf = Instantiate(Shelf, Hand_Content.transform.position, Hand_Content.transform.rotation);
            New_Shelf.GetComponent<Renderer>().material = Shelf_Tex;
            New_Shelf.transform.localScale = Shelf_T.transform.localScale;
            Destroy(Hand_Content);
            Hand_Content = null;
            Money_System.RemoveMoney(100);
            Is_Holding = false;
        }
        else if (Hand_Content_ID == "Fridge")
        {
            GameObject New_Fridge = Instantiate(Fridge, Hand_Content.transform.position, Hand_Content.transform.rotation);
            New_Fridge.GetComponent<Renderer>().material = Fridge_Tex;
            New_Fridge.transform.localScale = Fridge_T.transform.localScale;
            Destroy(Hand_Content);
            Hand_Content = null;
            Money_System.RemoveMoney(150);
            Is_Holding = false;
        }
    }

    void Update () 
    {
        // Place
        if (GamePad.GetButtonRelease(N3dsButton.A))
        {
            if (Is_Holding)
            {
                Place_Furniture();
            }
        }
        // Cancel
        if (GamePad.GetButtonRelease(N3dsButton.B))
        {
            if (Is_Holding)
            {
                Destroy(Hand_Content);
                Is_Holding = false;
            }
        }
        // Rotate
        if (Is_Holding)
        {
            if (GamePad.GetButtonRelease(N3dsButton.Left))
            {
                Hand_Transform.transform.Rotate(-10f, 0, 0f);
            }
            if (GamePad.GetButtonRelease(N3dsButton.Right))
            {
                Hand_Transform.transform.Rotate(10f, 0f, 0f);
            }
        }
    }

}
