using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace SAS
{

public class StampbookPage : MonoBehaviour
{
    public Image stampImage;
    public Image bgImage;
    public List<Sprite> stamps;
    public List<Sprite> backgrounds;

    public bool isFacingUp;
    
    // if is facing up, enable [0]
    // otherwise enable [1]

    public void ControlPage()
    {
        if (isFacingUp)
        {
            stampImage.sprite = stamps[0];
            bgImage.sprite = backgrounds[0];
        }
        else
        {
            stampImage.sprite = stamps[1];
            bgImage.sprite = backgrounds[1];
        }
    }

    public void HideStamp(bool isShow)
    {
        stampImage.enabled = isShow;
    }
}
}