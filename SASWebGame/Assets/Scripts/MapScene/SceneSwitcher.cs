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
        SceneManager.LoadScene(sceneName);
    }
}
