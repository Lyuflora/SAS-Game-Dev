using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using Fungus;
using SAS;

public class MapSpot : MonoBehaviour, IClickable
{
    public SpriteRenderer m_SpriteRenderer;

    [SerializeField] private Color m_Normal;
    [SerializeField] private Color m_Hover;
    [SerializeField] private Color m_Press;
    [SerializeField] private Color m_Disabled;

    private bool m_IsActive;

    [SerializeField]
    private string blockName;

    public UnityEvent mapSpotEvent;
    [SerializeField] private Optional<TravelEvent> travelEvent = new Optional<TravelEvent>();
    private void Awake()
    {
        m_SpriteRenderer = GetComponent<SpriteRenderer>();
    }

    #region MouseEvent Handler

    

    public void Init(bool isActive)
    {
        m_IsActive = isActive;
        if (!isActive)
        {
            m_SpriteRenderer.color = m_Disabled;
            Debug.Log("not active "+ this.name);
        }
        else
        {
            m_SpriteRenderer.color = m_Normal;
        }
    }
    
    private void OnMouseEnter()
    {
        if(m_IsActive)
            m_SpriteRenderer.color = m_Hover;
    }

    private void OnMouseDown()
    {
        if(m_IsActive)
            Interact();
    }

    private void OnMouseUpAsButton()
    {
        if(m_IsActive)
            ExitInteract();
    }

    private void OnMouseExit()
    {
        if(m_IsActive)
            ExitInteract();
    }
    #endregion

    public void Interact()
    {
        m_SpriteRenderer.color = m_Press;
        Debug.Log("go" + this.name);

        // SpotManager.m_Instance.TryEnterSpot(this);

        SpotManager.m_Instance.SetCurSpot(this);
        SpotManager.m_Instance.spotFlowchart.ExecuteIfHasBlock(blockName);
        
        
    }

    public Optional<TravelEvent> GetTravelEvent()
    {
        return this.travelEvent;
    }
    public void ExitInteract()
    {
        m_SpriteRenderer.color = m_Normal;
    }
}
