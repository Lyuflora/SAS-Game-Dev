using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerStatus : MonoBehaviour
{
    public static PlayerStatus m_Instance;

    private void Awake()
    {
        m_Instance = this;
        
        // first play
        bool has_sp_played = PlayerPrefs.HasKey("spStatus");
        if (has_sp_played)
        {
            Debug.Log(PlayerPrefs.GetInt("spStatus"));
        }
        else
        {
            // havent played
            PlayerPrefs.SetInt("spStatus",-1); 
        }
    }

    void Start()
    {
        
        
    }

    // check if the player has won the game
    public int GetSPStatus()
    {
        return PlayerPrefs.GetInt("spStatus");
    }

    public bool CheckReceivedSPReward()
    {
        return PlayerPrefs.GetInt("spStatus") == 1;
    }
}
