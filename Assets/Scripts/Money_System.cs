using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Money_System : MonoBehaviour {

	private Text Money_T;
	public static int Money_Amt = 1000;

	public static int AddMoney(int amt)
	{
		if (Money_Amt < 0 && amt >= Money_Amt)
		{
            return Money_Amt += amt;
        }
		else 
		{
			return Money_Amt;
        }
    }

    void Start () 
	{
		Money_T = GetComponent<Text>();
    }
	
	void Update () 
	{
		Money_T.text = "Money: $" + Money_Amt.ToString();
    }
}
