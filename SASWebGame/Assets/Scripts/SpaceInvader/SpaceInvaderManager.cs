using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpaceInvaderManager : MonoBehaviour
{
    public static SpaceInvaderManager m_Instance;
    public InvaderPlayer m_player;

    public GameObject m_WinPanel;
    public GameObject m_LosePanel;

    public UGS_Analytics m_Analytics;
    private void Awake()
    {
        m_Instance = this;
    }

    void Start()
    {
        m_WinPanel.SetActive(false);
        m_LosePanel.SetActive(false);
    }

    public void WinSpaceInvader()
    {
        m_WinPanel.SetActive(true);
        PlayerPrefs.SetInt("spStatus",1);   // 1 for winning, 0 for losing, -1 for not initialized

        m_Analytics.SPWinCustomEvent(m_player.playerScore + 100-(int)Time.realtimeSinceStartup);
    }

    public void LoseSpaceInvader()
    {
        m_LosePanel.SetActive(true);
        
        if (PlayerStatus.m_Instance.CheckReceivedSPReward() == false)
        {
            PlayerPrefs.SetInt("spStatus",0); 
            
        }
        
        m_Analytics.SPLoseCustomEvent(m_player.playerScore);
    }
    
}
