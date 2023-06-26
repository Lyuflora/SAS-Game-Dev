using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using Fungus;
using SAS;

public class MapSpot : MonoBehaviour, IClickable
{
    [SerializeField] private SpotInfo m_SpotInfo;
    public SpriteRenderer m_SpriteRenderer;
    public SpriteRenderer m_Marker;
    public Transform m_PlayerTrans;

    [SerializeField] private Color m_Normal;
    [SerializeField] private Color m_Hover;
    [SerializeField] private Color m_Press;
    [SerializeField] private Color m_Disabled;

    [SerializeField] public SpotStatus m_Status;
    [SerializeField] private string blockName;

    public UnityEvent mapSpotEvent;
    [SerializeField] private Optional<TravelEvent> travelEvent = new Optional<TravelEvent>();

    public int id;
    
    private void Awake()
    {
    }

    #region MouseEvent Handler

    private void Start()
    {
        Init();
        m_Marker.enabled = false;
    }

    public void Init()
    {
        m_Status = m_SpotInfo.status;
        SetSpotLook();
    }

    public void SetSpotLook()
    {
        if (m_Status == SpotStatus.Locked)
        {
            // m_SpriteRenderer.color = m_Disabled;
            m_SpriteRenderer.sprite = m_SpotInfo.spotPictLocked;
            //m_Marker.enabled = true;
            //m_Marker.sprite = SpotManager.m_Instance.question;
            Debug.Log("not active " + this.name);
        }
        else if (m_Status == SpotStatus.Unvisited)
        {
            m_SpriteRenderer.sprite = m_SpotInfo.spotPict;
            //m_SpriteRenderer.color = m_Normal;
            //m_Marker.enabled = true;
            //m_Marker.sprite = SpotManager.m_Instance.question;
        }
        else if (m_Status == SpotStatus.Active)
        {
            m_SpriteRenderer.sprite = m_SpotInfo.spotPictVisited;
            // m_Marker.enabled = true;
            // m_Marker.sprite = SpotManager.m_Instance.check;
            // m_Marker.enabled = false;
            // set player position
            SpotManager.m_Instance.SetPlayerPos(m_PlayerTrans.position);
        }
        else if (m_Status == SpotStatus.Visited)
        {
            m_SpriteRenderer.sprite = m_SpotInfo.spotPictVisited;
            // m_Marker.enabled = true;
            // m_Marker.sprite = SpotManager.m_Instance.check;
        }
    }

    private void OnMouseEnter()
    {
        if (CanInteractSpot())
        {
            m_SpriteRenderer.color = m_Hover;
        }

        // Debug.Log(m_Status);
    }

    private bool CanInteractSpot()
    {
        return (m_Status != SpotStatus.Locked &&
                PlayerStatus.m_Instance.GetInteractionStatus() == IntStatus.canInteract);
    }

    private void OnMouseDown()
    {
        if (CanInteractSpot())
            Interact();
    }

    private void OnMouseUpAsButton()
    {
        if (CanInteractSpot())
            ExitInteract();
    }

    private void OnMouseExit()
    {
        if (CanInteractSpot())
            ExitInteract();
    }

    #endregion

    public void Interact()
    {
        m_SpriteRenderer.color = m_Press;
        Debug.Log("go" + this.name);
        PlayerStatus.m_Instance.DisableInteraction();

        // SpotManager.m_Instance.TryEnterSpot(this);
        m_Status = SpotStatus.Active;
        SpotManager.m_Instance.CurrentSpot.m_Status = SpotStatus.Visited;
        SpotManager.m_Instance.CurrentSpot.SetSpotLook();

        SpotManager.m_Instance.SetCurSpot(this);
        // SpotManager.m_Instance.CurrentSpot = this;
        this.m_Status = SpotStatus.Active;
        this.SetSpotLook();
 

        // spot dialogue
        StartCoroutine(nameof(ExecuteSpotBlock));

    }

    public Optional<TravelEvent> GetTravelEvent()
    {
        return this.travelEvent;
    }

    public void ExitInteract()
    {
        m_SpriteRenderer.color = m_Normal;
    }

    IEnumerator ExecuteSpotBlock()
    {
        yield return new WaitForSeconds(.5f);
        m_SpriteRenderer.color = m_Normal;
        SpotManager.m_Instance.spotFlowchart.ExecuteIfHasBlock(blockName);
    }

    public SpotInfo GetSpotInfo()
    {
        return m_SpotInfo;
    }
}