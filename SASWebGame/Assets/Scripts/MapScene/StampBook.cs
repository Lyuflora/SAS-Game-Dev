using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.UI;

public class StampBook : MonoBehaviour
{
    [SerializeField] float pageSpeed = 0.5f;
    [SerializeField] List<Transform> pages;
    [SerializeField] int index = -1;
    bool rotate = false;
    [SerializeField] GameObject backButton;
    [SerializeField] GameObject forwardButton;

    // save the stamps
    public int stampRecord;

    public Animator animator;

    public static StampBook m_Instance;

    private void Awake()
    {
        m_Instance = this;
    }

    private void Start()
    {
        InitialState();
    }

    public void Popup()
    {
        animator.SetBool("Open", true);
        PlayerStatus.m_Instance.DisableInteraction();
        
        var stampRecordList=stampRecord.ToBinaryBits(8); // [0,0,0,0,1,1,0,0]

        pages[0].GetComponent<SAS.Page>().isFacingUp = true;
        for (int i=0; i<pages.Count; i++)
        {
            pages[i].GetComponent<SAS.Page>().ControlPage();
        }
    }

    public void PopupSFX()
    {
        SoundManager.Instance.Play(MapSoundLibrary.m_Instance.openSFX);
    }
    public void Close()
    {
        animator.SetBool("Open", false);
        PlayerStatus.m_Instance.EnableInteraction();
    }
    public void InitialState()
    {
        for (int i=0; i<pages.Count; i++)
        {
            pages[i].transform.rotation=Quaternion.identity;
        }
        pages[0].SetAsLastSibling();
        backButton.SetActive(false);

    }

    public void RotateForward()
    {
        if (rotate == true) { return; }
        index++;
        float angle = 180; //in order to rotate the page forward, you need to set the rotation by 180 degrees around the y axis
        ForwardButtonActions();
        pages[index].SetAsLastSibling();
        StartCoroutine(Rotate(angle, true));
        pages[index].GetComponent<SAS.Page>().isFacingUp = false;
        pages[index].GetComponent<SAS.Page>().ControlPage();
        if (index+1 < pages.Count)
        {
            pages[index+1].GetComponent<SAS.Page>().isFacingUp = true;
            pages[index+1].GetComponent<SAS.Page>().ControlPage();
        }
        
    }

    public void ForwardButtonActions()
    {
        if (backButton.activeInHierarchy == false)
        {
            backButton.SetActive(true); //every time we turn the page forward, the back button should be activated
        }
        if (index == pages.Count - 1)
        {
            forwardButton.SetActive(false); //if the page is last then we turn off the forward button
        }
    }

    public void RotateBack()
    {
        if (rotate == true) { return; }
        float angle = 0; //in order to rotate the page back, you need to set the rotation to 0 degrees around the y axis
        pages[index].SetAsLastSibling();
        BackButtonActions();
        StartCoroutine(Rotate(angle, false));
        
        pages[index+1].GetComponent<SAS.Page>().isFacingUp = true;
        pages[index+1].GetComponent<SAS.Page>().ControlPage();
        if (index > 0)
        {
            pages[index].GetComponent<SAS.Page>().isFacingUp = false;
            pages[index].GetComponent<SAS.Page>().ControlPage();
        }
    }

    public void BackButtonActions()
    {
        if (forwardButton.activeInHierarchy == false)
        {
            forwardButton.SetActive(true); //every time we turn the page back, the forward button should be activated
        }
        if (index - 1 == -1)
        {
            backButton.SetActive(false); //if the page is first then we turn off the back button
        }
    }

    IEnumerator Rotate(float angle, bool forward)
    {
        float value = 0f;
        while (true)
        {
            rotate = true;
            Quaternion targetRotation = Quaternion.Euler(0, angle, 0);
            value += Time.deltaTime * pageSpeed;
            pages[index].rotation = Quaternion.Slerp(pages[index].rotation, targetRotation, value); //smoothly turn the page
            float angle1 = Quaternion.Angle(pages[index].rotation, targetRotation); //calculate the angle between the given angle of rotation and the current angle of rotation
            if (angle1 < 0.1f)
            {
                if (forward == false)
                {
                    index--;
                }
                rotate = false;
                break;

            }
            for(int i=0; i<pages[index].transform.childCount; i++)
            {
                pages[index].transform.GetChild(i).gameObject.SetActive(!forward);
            }
            yield return null;

        }
    }


    public Sprite GetCurrentStampSprite()
    {
        foreach (Transform tr in pages[index + 1])
        {
            if(!tr.GetComponentInChildren<Image>().sprite)
                return tr.GetComponentInChildren<Image>().sprite;
        }

        return null;
    }

}
