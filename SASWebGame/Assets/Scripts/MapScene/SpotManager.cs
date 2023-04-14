using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Serialization;

[Serializable]
public class SpotInfo
{
    public MapSpot m_Spot;
    public bool isActive;
}

public class SpotManager : MonoBehaviour
{
    public static SpotManager m_Instance;

    public List<SpotInfo> m_SpotInfoList;

    private void Awake()
    {
        m_Instance = this;
    }

    public void Start()
    {
        InitializeSpots();
    }

    public void InitializeSpots()
    {
        foreach (var spotInfo in m_SpotInfoList)
        {
            spotInfo.m_Spot.Init(spotInfo.isActive);
        }    
    }
    
    public void TryEnterSpot(MapSpot spot)
    {
        // should find the spot-scene relation
        SceneSwitcher.m_Instance.LoadSpaceInvaderScene();
    }
}