using UnityEngine;
using UnityEngine.UI;

public class Money_System : MonoBehaviour
{

    private Text Money_T;
    // On le garde en static pour y accéder depuis d'autres scripts
    public static int Money_Amt = 1000;

    public static void AddMoney(int amt)
    {
        // On ajoute simplement le montant
        Money_Amt += amt;
    }

    public static bool RemoveMoney(int amt)
    {
        // On vérifie si on a assez d'argent AVANT de retirer
        if (Money_Amt >= amt)
        {
            Money_Amt -= amt;
            return true; // Le retrait a réussi
        }
        else
        {
            Debug.Log("Pas assez d'argent !");
            return false; // Le retrait a échoué
        }
    }

    void Start()
    {
        Money_T = GetComponent<Text>();
    }

    void Update()
    {
        // Mise à jour de l'affichage
        if (Money_T != null)
            Money_T.text = "Money: $" + Money_Amt.ToString();
    }
}