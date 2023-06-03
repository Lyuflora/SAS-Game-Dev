using System.Collections;
using System.Collections.Generic;
using SAS;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class TravelEventUI : MonoBehaviour
{
    public Animator animator;
    public GameObject optionParent;
    public TMP_Text eventTitle;
    public TMP_Text eventText;
    public Image eventImage;
    public TravelEvent travelEvent { get; set; }
    public Button optionBtnPrefab;

    public void SetEventPanelContent(TravelEvent targetEvent)
    {
        travelEvent = targetEvent;
        eventTitle.text = targetEvent.eventTitle;
        eventText.text = targetEvent.eventText;
        eventImage.sprite = targetEvent.eventPict;

        //SpotManager.m_Instance.spotFlowchart.ExecuteIfHasBlock(targetEvent.eventOptionBlock);
        StartCoroutine(nameof(ExecuteSoptEventBlock));
        // foreach (var travelEventOption in travelEvent.OptionList)
        // {
        //     Button button = Instantiate(optionBtnPrefab, new Vector3(.0F, 0, 0), Quaternion.identity);
        //     button.transform.parent = optionParent.transform;
        //     button.onClick.AddListener(CustomButton_onClick(travelEventOption.block));
        // }
    }

    public void SetOptionButtonEvent()
    {
        
    }

    IEnumerator ExecuteSoptEventBlock()
    {
        yield return new WaitForSeconds(.8f);
        SpotManager.m_Instance.spotFlowchart.ExecuteIfHasBlock(travelEvent.eventOptionBlock);

    }

    public void Popup()
    {
        SetEventPanelContent(SpotManager.m_Instance.CurrentSpot.GetTravelEvent().Value);
        animator.SetBool("Open", true);
        PlayerStatus.m_Instance.DisableInteraction();
    }
    public void Close()
    {
        animator.SetBool("Open", false);
        PlayerStatus.m_Instance.EnableInteraction();
    }
}
