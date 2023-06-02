using System;
using System.Collections;
using System.Collections.Generic;
using Fungus;
using SAS;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Serialization;

public class SpotManager : MonoBehaviour
{
    public static SpotManager m_Instance;

    [FormerlySerializedAs("m_SpotInfoList")] public List<MapSpot> m_SpotList;
    [SerializeField] private MapSpot currentSpot;
    [SerializeField] private MapSpot firstSpot;
    public Flowchart spotFlowchart;

    private void Awake()
    {
        m_Instance = this;
        InitializeSpots();
    }

    public void Start()
    {
        
    }

    // set spots initial status
    public void InitializeSpots()
    {
        foreach (var spotPreset in App.m_Instance.GetLevel1Preset().m_Preset)
        {
            spotPreset.spotInfo.status = spotPreset.statusPreset;
        }
        
        // set the first spot
        SetCurSpot(firstSpot);
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