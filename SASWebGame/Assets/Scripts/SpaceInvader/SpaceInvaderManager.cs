using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpaceInvaderManager : MonoBehaviour
{
    public static SpaceInvaderManager m_Instance;

    public GameObject m_WinPanel;
    public GameObject m_LosePanel;
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
    }

    public void LoseSpaceInvader()
    {
        m_LosePanel.SetActive(true);

        if (PlayerStatus.m_Instance.CheckReceivedSPReward() == false)
        {
            PlayerPrefs.SetInt("spStatus",0); 
            
        }
    }
    
}
