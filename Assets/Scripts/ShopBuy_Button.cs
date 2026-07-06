using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ShopBuy_Button : MonoBehaviour {

	public Shop_Button shop_Button;
    [Header("Hand System Reference")]
    public Hand_System hand_System;
	[Header("Shelf Buy Button Components")]
    public Button shelfBuy_Button;
	public Text shelfBuy_Text;
    public Image shelfBuy_Image;
    [Header("Fridge Buy Button Components")]
    public Button fridgeBuy_Button;
    public Text fridgeBuy_Text;
    public Image fridgeBuy_Image;
    [Header("Cross Button Components")]
	public Button cross_Button;
	public Image cross_Image;

    void Start () 
	{
        // Disable the shelf buy button and text at the start
        shelfBuy_Button.enabled = false;
		shelfBuy_Text.enabled = false;
        shelfBuy_Image.enabled = false;
        // Disable the fridge buy button and text at the start
        fridgeBuy_Button.enabled = false;
        fridgeBuy_Text.enabled = false;
        fridgeBuy_Image.enabled = false;
        // Disable the cross button and image at the start
        cross_Button.enabled = false;
		cross_Image.enabled = false;
    }

	public void EnableShopBuyButton() 
	{
        // Enable the shelf buy button and text
        shelfBuy_Button.enabled = true;
        shelfBuy_Text.enabled = true;
        shelfBuy_Image.enabled = true;
        // Enable the fridge buy button and text
        fridgeBuy_Button.enabled = true;
        fridgeBuy_Text.enabled = true;
        fridgeBuy_Image.enabled = true;
        // Enable Cross Button and Image
        cross_Button.enabled = true;
		cross_Image.enabled = true;
    }

    public void ShelfBuyButtonClicked() 
	{
		hand_System.Select_Shelf();
    }

    public void FridgeBuyButtonClicked() 
    {
        hand_System.Select_Fridge();
    }


    public void CrossBuyButtonClicked() 
	{
        // Disable the shelf buy button and text
        shelfBuy_Button.enabled = false;
        shelfBuy_Text.enabled = false;
        shelfBuy_Image.enabled = false;
        // Disable the fridge buy button and text at the start
        fridgeBuy_Button.enabled = false;
        fridgeBuy_Text.enabled = false;
        fridgeBuy_Image.enabled = false;
        // Disable the cross button and image
        cross_Button.enabled = false;
        cross_Image.enabled = false;
        shop_Button.EnableShopButton();
    }

}
