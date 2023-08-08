using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class SceneSwitcher : MonoBehaviour
{
    public static SceneSwitcher m_Instance;
    public Animator transtionAnim;
    private string sceneName;

    private void Awake()
    {
        m_Instance = this;
    }



    public void LoadSpaceInvaderScene()
    {
        sceneName = "Level_SpaceInvader";
        Debug.Log("Go SpaceInvader");
        SceneManager.LoadScene(sceneName);
        // debug -- no anim
        //StartCoroutine(nameof(LoadSceneByName));

    }
    public void LoadMapScene()
    {
        sceneName = "Map_Prototype";
        Debug.Log("Go Map");
        StartCoroutine(nameof(LoadSceneByName));

    }
    public void LoadScene(string r_SceneNname)
    {
        sceneName = r_SceneNname;
        StartCoroutine(nameof(LoadSceneByName));
    }

    IEnumerator LoadSceneByName()
    {
        transtionAnim.SetTrigger("end");
        yield return new WaitForSeconds(.5f);
        UnityEngine.SceneManagement.SceneManager.LoadScene(sceneName);
    }
}
