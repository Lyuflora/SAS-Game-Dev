using System;
using System.Collections;
using System.Collections.Generic;
using SAS;
using UnityEngine;

public class SpaceInvaderManager : MonoBehaviour
{
    public static SpaceInvaderManager m_Instance;
    public InvaderPlayer m_player;

    public GameObject m_WinPanel;
    public GameObject m_LosePanel;

    public UGS_Analytics m_Analytics;

    [Header("Sounds")] 
    public AudioClip bgm;
    public AudioClip shootSFX;
    public AudioClip winSFX;
    public AudioClip loseSFX;
    public AudioClip hitSFX;

    public PauseMenu pauseMenu;
    
    private void Awake()
    {
        m_Instance = this;
    }

    void Start()
    {
        m_WinPanel.SetActive(false);
        m_LosePanel.SetActive(false);
        SoundManager.Instance.PlayMusic(bgm);
        
        // debugging
        SaveSPWin();
    }

    public void WinSpaceInvader()
    {
        m_WinPanel.SetActive(true);
        pauseMenu.Pause();
        
        PlayerPrefs.SetInt("spStatus",1);   // 1 for winning, 0 for losing, -1 for not initialized
        // to do: save
        SaveSPWin();
        
        SoundManager.Instance.Play(winSFX);
        m_Analytics.SPWinCustomEvent(m_player.playerScore + 100-(int)Time.realtimeSinceStartup);
    }

    public void LoseSpaceInvader()
    {
        m_LosePanel.SetActive(true);
        
        SoundManager.Instance.Play(loseSFX);
        m_Analytics.SPLoseCustomEvent(m_player.playerScore);
    }

    public void PlayKillSFX()
    {
        SoundManager.Instance.Play(hitSFX);
    }

    public void PlayShootSFX()
    {
        SoundManager.Instance.Play(shootSFX);
    }

    #region Save SpaceInvader Result

    public void SaveSPWin()
    {
        if (GameDataManager.Instance)
        {
            GameDataManager.Instance.LoadGame();
            GameDataManager.Instance.isWinSP = true;

            GameDataManager.Instance.SaveGame();
        }
        
    }
    

    #endregion
}
