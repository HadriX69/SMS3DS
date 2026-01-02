using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Shop_Button : MonoBehaviour 
{
    [Header("Shop Button Components")]
    public Button shopButton;
    public Image shopImage;
    public Text shopText;
    [Header("Settings Button Components")]
    public Button settingsButton;
    public Image settingsImage;
    public Text settingsText;

    public ShopBuy_Button shopBuy_Button;

    public void ShopButtonClicked()
    {
        // Hide shop button
        shopButton.enabled = false;
        shopImage.enabled = false;
        shopText.enabled = false;
        // Hide settings button
        settingsButton.enabled = false;
        settingsImage.enabled = false;
        settingsText.enabled = false;
        shopBuy_Button.EnableShopBuyButton();
    }
    public void EnableShopButton()
    {
        // Show shop button
        shopButton.enabled = true;
        shopImage.enabled = true;
        shopText.enabled = true;
        // Show settings button
        settingsButton.enabled = true;
        settingsImage.enabled = true;
        settingsText.enabled = true;
    }
}
