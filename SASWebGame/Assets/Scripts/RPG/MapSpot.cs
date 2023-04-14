using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapSpot : MonoBehaviour, IClickable
{
    public SpriteRenderer m_SpriteRenderer;

    [SerializeField] private Color m_Normal;
    [SerializeField] private Color m_Hover;
    [SerializeField] private Color m_Press;
    [SerializeField] private Color m_Disabled;

    private bool m_IsActive;
    
    private void Awake()
    {
        m_SpriteRenderer = GetComponent<SpriteRenderer>();
    }

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

    public void Interact()
    {
        m_SpriteRenderer.color = m_Press;
        Debug.Log("go" + this.name);
        
        SpotManager.m_Instance.TryEnterSpot(this);
    }

    public void ExitInteract()
    {
        m_SpriteRenderer.color = m_Normal;
    }
}
