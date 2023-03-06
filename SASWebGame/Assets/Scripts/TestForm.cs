using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class TestForm : MonoBehaviour
{
    [Header("Set up")]
    private string form_uri = "https://docs.google.com/forms/u/0/d/e/1FAIpQLSeip_fYwUWtQkVKsnsFZmbEr-sdzVOgfDSisiEVXMddvRjDVQ/formResponse";

    [SerializeField]
    private List<string> entryList = new List<string>();

    private string sheet_id = "1RoXOC_fePvFVihXAWMm_1QXxDchDzIB2sXiTZ5lJUtM";
    private string sheet_name = "SheetResponses";
    private string api_key = "AIzaSyDfxoUWmCNFo41DR42yqQ58_kumCOoE1Lc";
    [SerializeField]
    private string request_uri;

    private IEnumerator FillForm(string entry, string value)
    {
        WWWForm form = new WWWForm();
        form.AddField(entry, value);
        UnityWebRequest req = UnityWebRequest.Post(form_uri, form);
        yield return req.SendWebRequest();
        Debug.Log(req.result);
    }

    private IEnumerator RetrieveDataFromSheet()
    {
        UnityWebRequest req = UnityWebRequest.Get(request_uri);
        yield return req.SendWebRequest();

        Debug.Log(req.result);
        Debug.Log(req.downloadHandler.text);

    }

    private void Start()
    {

        request_uri = String.Format("https://sheets.googleapis.com/v4/spreadsheets/{0}/values/{1}?key={2}", sheet_id, sheet_name, api_key);
        //request_uri = "https://sheets.googleapis.com/v4/spreadsheets/1RoXOC_fePvFVihXAWMm_1QXxDchDzIB2sXiTZ5lJUtM/values/SheetResponses?key=AIzaSyDfxoUWmCNFo41DR42yqQ58_kumCOoE1Lc";
        Debug.Log(request_uri);
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.R))
        {
            StartCoroutine (RetrieveDataFromSheet());
        }
        if (Input.GetKeyDown(KeyCode.F1))
        {
            StartCoroutine(FillForm(entryList[0], "t"));
        }
        if (Input.GetKeyDown(KeyCode.F2))
        {
            StartCoroutine(FillForm(entryList[1], "t"));
        }
        if (Input.GetKeyDown(KeyCode.F3))
        {
            StartCoroutine(FillForm(entryList[2], "t"));
        }
    }
}
