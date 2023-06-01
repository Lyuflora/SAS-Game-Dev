using System;
using System.Collections;
using System.Collections.Generic;
using Fungus;
using SAS;
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
    [SerializeField] private MapSpot currentSpot;
    public Flowchart spotFlowchart;

    private void Awake()
    {
        m_Instance = this;
    }

    public void Start()
    {
        InitializeSpots();
    }

    // set spots initial status
    public void InitializeSpots()
    {
        foreach (var spotInfo in m_SpotInfoList)
        {
            spotInfo.m_Spot.Init(spotInfo.isActive);
        }
    }

    #region What happens after clicking on a Spot

    public void SetCurSpot(MapSpot spot)
    {
        Debug.Log(spot.name);
        currentSpot = spot;
    }

    // Here is the start, called by fungus
    public void TryEnterSpot()
    {
        // should find the spot-scene relation
        // do some changes...
        currentSpot.mapSpotEvent.Invoke();
        
    }

    public void TriggerTravelEvent()
    {
        if (currentSpot.GetTravelEvent().Enabled)
        {
            ShowPopupEvent(currentSpot.GetTravelEvent().Value);
        }
    }

    private void ShowPopupEvent(TravelEvent targetEvent)
    {
        Debug.Log(targetEvent.eventTitle);
    }
    
    public void EnterSpaceInvader()
    {
        SceneSwitcher.m_Instance.LoadSpaceInvaderScene();
    }

    #endregion
}