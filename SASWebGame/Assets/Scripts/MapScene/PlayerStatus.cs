using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

public class PlayerStatus : MonoBehaviour
{
    public static PlayerStatus m_Instance;

    [FormerlySerializedAs("m_intStatus")] [FormerlySerializedAs("m_interactionStatus")]
    public IntStatus m_IntStatus;

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
            PlayerPrefs.SetInt("spStatus", -1);
        }
    }

    void Start()
    {
        m_IntStatus = IntStatus.canInteract;
    }


    #region Set Interaction Status

    public IntStatus GetInteractionStatus()
    {
        return m_IntStatus;
    }

    public void DisableInteraction()
    {
        m_IntStatus = IntStatus.disabled;
    }

    public void EnableInteraction()
    {
        m_IntStatus = IntStatus.canInteract;
    }

    #endregion

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