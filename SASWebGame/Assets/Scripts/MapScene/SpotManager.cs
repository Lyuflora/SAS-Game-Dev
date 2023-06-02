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
    public MapSpot CurrentSpot { get; set; }
    [SerializeField] private MapSpot firstSpot;
    public Flowchart spotFlowchart;

    [Header("Spot Marker Sprites")]
    public Sprite check;
    public Sprite question;

    public GameObject player;

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
        foreach (var spotPreset in App.m_Instance.GetLevel1Preset().m_Preset)
        {
            spotPreset.spotInfo.status = spotPreset.statusPreset;
            Debug.Log(spotPreset.spotInfo.status);
        }
        
        // set the first spot
        SetCurSpot(firstSpot);

        foreach (var spot in m_SpotList)
        {
            spot.Init();
        }
    }

    #region What happens after clicking on a Spot

    public void SetCurSpot(MapSpot spot)
    {
        Debug.Log(spot.name);
        CurrentSpot = spot;
    }

    // Here is the start, called by fungus
    public void TryEnterSpot()
    {
        // should find the spot-scene relation
        // do some changes...
        CurrentSpot.mapSpotEvent.Invoke();
        
    }

    public void TriggerTravelEvent()
    {
        if (CurrentSpot.GetTravelEvent().Enabled)
        {
            ShowPopupEvent(CurrentSpot.GetTravelEvent().Value);
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

    public void SetPlayerPos(Vector3 r_position)
    {
        player.transform.position = r_position;
        player.GetComponent<Animator>().SetTrigger("Hooray");
    }
    #endregion
}