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
    }

    public void LoseSpaceInvader()
    {
        m_LosePanel.SetActive(true);
    }
    
}
