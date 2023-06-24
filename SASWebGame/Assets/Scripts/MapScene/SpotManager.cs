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

    public List<MapSpot> m_SpotList;
    public MapSpot CurrentSpot { get; set; }
    [SerializeField] private MapSpot firstSpot;
    public Flowchart spotFlowchart;

    [Header("Event UI")] public TravelEventUI travelEventUI;
    
    [Header("Spot Marker Sprites")]
    public Sprite check;
    public Sprite question;

    public GameObject player;
    public SaveInfoNewer SaveInfo;
 

    private void Awake()
    {
        m_Instance = this;
        
    }

    public void Start()
    {
        InitializeSpots();
        // load
        // SaveInfoNewer.m_Instance.LoadData();
        // StartCoroutine(nameof(UsePreset));
    }

    IEnumerator UsePreset()
    {
        yield return new WaitForSeconds(1f);
        foreach (var spotPreset in App.m_Instance.GetLevel1Preset().m_Preset)
        {
            Debug.Log("data? "+SaveInfoNewer.m_Instance.data!=null);
            
            if (SaveInfoNewer.m_Instance.data.ContainsKey(spotPreset.spotInfo.name))
            {
                spotPreset.spotInfo.status = (SpotStatus)SaveInfoNewer.m_Instance.data[spotPreset.spotInfo.name];
            }
            else
            {
                spotPreset.spotInfo.status = SpotStatus.Unvisited;
                SaveInfoNewer.m_Instance.data.Add(spotPreset.spotInfo.name, (int)SpotStatus.Unvisited);
            }
        }
    }
    

    // set spots initial status
    // Use the Reset Button
    public void InitializeSpots()
    {
        foreach (var spotPreset in App.m_Instance.GetLevel1Preset().m_Preset)
        {
            spotPreset.spotInfo.status = spotPreset.statusPreset;
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
        
        // SaveSpotHistory(CurrentSpot.GetSpotInfo());
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
        
        travelEventUI.Popup();
    }
    
    public void EnterSpaceInvader()
    {
        SceneSwitcher.m_Instance.LoadSpaceInvaderScene();
        SaveActiveSpot(CurrentSpot.GetSpotInfo());
    }

    public void SetPlayerPos(Vector3 r_position)
    {
        player.transform.position = r_position;
        player.GetComponent<Animator>().SetTrigger("Hooray");
    }
    #endregion

    #region SaveMapHistory

    
    
    void SaveSpotHistory(SpotInfo spotInfo)
    {
        if (SaveInfoNewer.m_Instance.data.ContainsKey(spotInfo.name))
        {
            SaveInfoNewer.m_Instance.data[spotInfo.name] = (int)SpotStatus.Visited;
        }
        else
        {
            SaveInfoNewer.m_Instance.data.Add(spotInfo.name, (int)SpotStatus.Visited);
            
        }
        Debug.Log(SaveInfoNewer.m_Instance.data[spotInfo.name]);
        SaveInfoNewer.m_Instance.SaveData();
    }

    void SaveActiveSpot(SpotInfo spotInfo)
    {
        SaveInfoNewer.m_Instance.data.Add(spotInfo.name, (int)SpotStatus.Active);
        SaveInfoNewer.m_Instance.SaveData();
    }    

    #endregion
}