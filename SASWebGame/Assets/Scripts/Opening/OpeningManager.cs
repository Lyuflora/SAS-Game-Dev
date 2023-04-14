using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fungus;

public class OpeningManager : MonoBehaviour
{
    public static OpeningManager m_Instance;

    public Fungus.Flowchart myFlowchart; // Link the Flowchart in your script
    
    [SerializeField]
    private string m_StartBlockName;

    public GameObject m_StartButton;
    
    private void Awake()
    {
        m_Instance = this;
    }

    // The game start button pressed
    public void GameStart()
    {
        if(m_StartBlockName!=null)
            myFlowchart.ExecuteBlock(m_StartBlockName); 
        
        // Hide the start button
        m_StartButton.SetActive(false);
    }
    
}
