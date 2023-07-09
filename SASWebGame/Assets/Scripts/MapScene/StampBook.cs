using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using System.Runtime.InteropServices;
using SAS;
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

    [SerializeField] private GameObject openedLeft;
    [SerializeField] private GameObject openedRight;
    
    // save the stamps
    public int stampRecord;
    [SerializeField] private Byte[] record;
    
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

    public void LoadRecord()
    {
        if (index + 1 < pages.Count)
        {
            pages[index+1].GetComponent<SAS.StampbookPage>().isFacingUp = true;
        }

        if (index>0)
        {
            pages[index].GetComponent<SAS.StampbookPage>().isFacingUp = false;
        }
        
        for (int i=0; i<pages.Count; i++)
        {
            pages[i].GetComponent<SAS.StampbookPage>().ControlPage();
        }

        record=stampRecord.ToBinaryBits(8); // [0,0,0,0,1,1,0,0]
        if (index + 1 < pages.Count)
        {
            pages[index+1].GetComponent<SAS.StampbookPage>().isFacingUp = true;
            pages[index+1].GetComponent<SAS.StampbookPage>().ControlPage();
            pages[index+1].GetComponent<StampbookPage>().stampImage.enabled = (record[(index+1)*2] != 0);
        }
    }

    private void UpdateCoverPage()
    {
        openedLeft.SetActive(true);
        openedRight.SetActive(true);
        // GetComponent<TestJPEGDownload>().ResetBtn();
        GetComponent<TestJPEGDownload>().HideLeftBtn();GetComponent<TestJPEGDownload>().HideRightBtn();

        
        if (index == -1)
        {
            Debug.Log("Hide Left");
            openedLeft.SetActive(false);
            GetComponent<TestJPEGDownload>().HideLeftBtn();
        }else if (index == pages.Count-1)
        {
            Debug.Log("Hide Right");
            openedRight.SetActive(false);
            GetComponent<TestJPEGDownload>().HideRightBtn();
        }
    }
    
    public void Popup()
    {
        
        InitialState();
        index = -1;
        UpdateCoverPage();
        forwardButton.SetActive(true); 
        animator.SetBool("Open", true);
        PlayerStatus.m_Instance.DisableInteraction();
        UpdateCoverPage();
        
        LoadRecord();
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
        
        record=stampRecord.ToBinaryBits(8); // [0,0,0,0,1,1,0,0]
        pages[index].GetComponent<SAS.StampbookPage>().isFacingUp = false;
        pages[index].GetComponent<SAS.StampbookPage>().ControlPage();
        pages[index].GetComponent<StampbookPage>().stampImage.enabled = (record[index*2+1] != 0);
        if (index+1 < pages.Count)
        {
            pages[index+1].GetComponent<SAS.StampbookPage>().isFacingUp = true;
            pages[index+1].GetComponent<SAS.StampbookPage>().ControlPage();
            pages[index + 1].GetComponent<StampbookPage>().stampImage.enabled = (record[(index + 1)*2] != 0);
        }

        UpdateCoverPage();

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
        
        record=stampRecord.ToBinaryBits(8); // [0,0,0,0,1,1,0,0]

        if (index + 1 < pages.Count)
        {
            pages[index+1].GetComponent<SAS.StampbookPage>().isFacingUp = true;
            pages[index+1].GetComponent<SAS.StampbookPage>().ControlPage();
            pages[index+1].GetComponent<StampbookPage>().stampImage.enabled = (record[(index+1)*2] != 0);
        }
        
        if (index > 0)
        {
            pages[index].GetComponent<SAS.StampbookPage>().isFacingUp = false;
            pages[index].GetComponent<SAS.StampbookPage>().ControlPage();
            pages[index].GetComponent<StampbookPage>().stampImage.enabled = (record[index*2+1] != 0);

        }

        UpdateCoverPage();
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
                    if (index == -1)
                    {
                        UpdateCoverPage();
                    }
                }
                rotate = false;
                break;

            }
            for(int i=0; i<pages[index].transform.childCount; i++)
            {
                // pages[index].transform.GetChild(i).gameObject.SetActive(!forward);
            }
            
            yield return null;

        }
    }


    public Sprite GetCurrentStampSprite()
    {
        // foreach (Transform tr in pages[index + 1])
        // {
        //     if(!tr.GetComponentInChildren<Image>().sprite)
        //         return tr.GetComponentInChildren<Image>().sprite;
        // }

        if (index + 1 >= pages.Count) return null;
        var currentPage = pages[index + 1].GetComponent<StampbookPage>();
        if (!currentPage.stampImage.sprite)
            return currentPage.stampImage.sprite;
        return null;
    }
    public Sprite GetPreviousStampSprite()
    {
        if (index < 0) return null;
        var currentPage = pages[index].GetComponent<StampbookPage>();
        if (!currentPage.stampImage.sprite)
            return currentPage.stampImage.sprite;
        return null;
    }
    public void CollectStamp(int spotId)
    {
        record=stampRecord.ToBinaryBits(8); 
        record[spotId] = 1;
        stampRecord = record.FromBinaryToInt(); 
        GameDataManager.Instance.SaveGame();
    }

}
