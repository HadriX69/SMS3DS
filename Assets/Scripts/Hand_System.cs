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
    // Shelf Variables
    [SerializeField] private GameObject Shelf;
    [Header("Furnitures Texture")]
    // Build Texture
    [SerializeField] private Material Build_Tex;
    // Shelf Texture
    [SerializeField] private Material Shelf_Tex;
    [Header("Furnitures Transform")]
    // Shelf Transform
    [SerializeField] private Transform Shelf_T;

    void Start () 
	{
        // Setup Furnitures
        Shelf_T.transform.localScale = new Vector3(2.5f, 5f, 230f);
        Shelf.GetComponent<Renderer>().material = Build_Tex;
    }

    public void Select_Shelf()
    {
        Hand_Content_ID = "Shelf";
        Hand_Content = Instantiate(Shelf, Hand_Transform.position + new Vector3(1f, 0f, 0f), Shelf_T.rotation);
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
            Money_System.AddMoney(-100);
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
