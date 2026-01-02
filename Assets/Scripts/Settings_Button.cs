using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Settings_Button : MonoBehaviour 
{

    [Header("Shop Button Components")]
    public Button shopButton;
    public Image shopImage;
    public Text shopText;
    [Header("Settings Button Components")]
    public Button settingsButton;
    public Image settingsImage;
    public Text settingsText;
    [Header("Cross button Components")]
    public Button crossButton;
    public Image crossImage;

    public void SettingsButtonClicked()
    {
        // Hide shop button
        shopButton.enabled = false;
        shopImage.enabled = false;
        shopText.enabled = false;
        // Hide settings button
        settingsButton.enabled = false;
        settingsImage.enabled = false;
        settingsText.enabled = false;
        // Show cross button
        crossButton.enabled = true;
        crossImage.enabled = true;
    }
}
