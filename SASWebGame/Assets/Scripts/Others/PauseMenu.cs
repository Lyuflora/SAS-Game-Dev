using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class PauseMenu : MonoBehaviour
{
    public static bool gameIsPaused = false;
    public GameObject pauseMenu;

    public void Start()
    {
        pauseMenu.SetActive(false);
        gameIsPaused = false;
    }
    
    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            SwitchPauseStatus();
        }
    }

    public void SwitchPauseStatus()
    {
        if (gameIsPaused)
        {
            pauseMenu.SetActive(false);
            Resume();
        }
        else
        {
            pauseMenu.SetActive(true);
            Pause();
        }
    }
    
    public void Pause()
    {
        
        Time.timeScale = 0f;
        gameIsPaused = true;
    }

    private void Resume()
    {
        
        Time.timeScale = 1f;
        gameIsPaused = false;
    }
}
