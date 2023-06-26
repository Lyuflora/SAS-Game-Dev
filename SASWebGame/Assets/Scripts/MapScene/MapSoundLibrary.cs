using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapSoundLibrary : MonoBehaviour
{
    
    public AudioClip mapBGM;
    public AudioClip btnSFX;
    public AudioClip spotSFX;
    public AudioClip popupSFX;
    public AudioClip openSFX;
    public static MapSoundLibrary m_Instance;

    private void Awake()
    {
        if (m_Instance == null)
        {
            m_Instance = this;
        }
        else if (m_Instance != this)
        {
            Destroy(gameObject);
        }

    }

    void Start()
    {
        SoundManager.Instance.PlayMusic(mapBGM);
    }

    public void PlaySpotSFX()
    {
        SoundManager.Instance.Play(spotSFX);
    }

    public void PlayBtnSFX()
    {
        SoundManager.Instance.Play(btnSFX);
    }
    
    public void PlayPopupSFX()
    {
        SoundManager.Instance.Play(popupSFX);
    }

}
