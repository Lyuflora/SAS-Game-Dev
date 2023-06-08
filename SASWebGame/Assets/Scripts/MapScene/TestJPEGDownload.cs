using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.UI;

public class TestJPEGDownload : MonoBehaviour
{
    public Sprite sprite;
    public Image stamp;
    public UnityEngine.UI.Button button;
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
    }

    private void onButtonClick()
    {
        byte[] photoByte = getImageSprite();//获取jpeg图像的字节流
        if (photoByte != null) {
            DownloadImage(photoByte, sprite.name + ".png");
        }else{
            Debug.LogError("Save Failed.");
        }
    }

    private byte[] getImageSprite()
    {
        sprite = stamp.sprite;
        if (sprite) {
            //return sprite.texture.EncodeToJPG();
            return sprite.texture.EncodeToPNG();
        }
        return null;
    }
}
