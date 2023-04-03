using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class TextInputHandler : MonoBehaviour
{
    public TMPro.TextMeshProUGUI m_DebugText;

    [SerializeField]
    private TMP_InputField inputField;

    public TMP_Text m_TextComponent;
    public void SubmitInputText()
    {
        Debug.Log(m_TextComponent.text);
        FormData.Instance.PushData(0, m_TextComponent.text);
        Aris.Utils.DebugToUIManager.m_Instance.DebugToUI("Submit " + m_TextComponent.text);
        CleanInputText();
    }

    public void CleanInputText()
    {
        inputField.Select();
        inputField.text = "";
        Debug.Log("Input Field Cleaned");
        Aris.Utils.DebugToUIManager.m_Instance.DebugToUI("Input Field Cleaned");
    }
}
