using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.UI;

public class TestJPEGDownload : MonoBehaviour
{
    [SerializeField] private Sprite sprite;
    public Image stamp;
    public UnityEngine.UI.Button button;
    public UnityEngine.UI.Button button_Left;
    #region ImageSave

    [DllImport("__Internal")]
    private static extern void ImageDownloader(string str, string fn);
    
    public void DownloadImage(byte[] imageData, string imageFileName = "newpic")
    {
        if (imageData != null) {
            Debug.Log("Downloading..." + imageFileName);
            ImageDownloader(System.Convert.ToBase64String(imageData), imageFileName);
        }
    }
    
    

    #endregion
    private void Start()
    {
        button.onClick.AddListener(this.onButtonClick);
        button_Left.onClick.AddListener(this.onButtonClickPrevious);
    }

    private void onButtonClick()
    {
        byte[] photoByte = getImageSprite(true);//获取jpeg图像的字节流
        if (photoByte != null) {
            DownloadImage(photoByte, sprite.name + ".png");
            Debug.Log("Downloading "+sprite.name + ".png");
        }else{
            Debug.LogError("Save Failed.");
        }
    }
    private void onButtonClickPrevious()
    {
        byte[] photoByte = getImageSprite(false);//获取jpeg图像的字节流
        if (photoByte != null) {
            DownloadImage(photoByte, sprite.name + ".png");
            Debug.Log("Downloading "+sprite.name + ".png");
        }else{
            Debug.LogError("Save Failed.");
        }
    }
    private byte[] getImageSprite(bool isRight)
    {
        if (isRight)
        {
            sprite = GetComponent<StampBook>().GetCurrentStampSprite();
            
        }
        else
        {
            sprite = GetComponent<StampBook>().GetPreviousStampSprite();

        }
        // sprite = stamp.sprite;
        if (sprite) {
            //return sprite.texture.EncodeToJPG();
            return sprite.texture.EncodeToPNG();
        }
        return null;
    }

    public void ResetBtn()
    {
        button_Left.gameObject.SetActive(true);
        button.gameObject.SetActive(true);
    }
    public void HideLeftBtn()
    {
        button_Left.gameObject.SetActive(false);
    }
    public void HideRightBtn()
    {
        button.gameObject.SetActive(false);
    }
}
