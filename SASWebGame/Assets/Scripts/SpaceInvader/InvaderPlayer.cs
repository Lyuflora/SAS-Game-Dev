using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace SAS
{
    

public class InvaderPlayer : MonoBehaviour
{
    public Projectile laserPrefab;

    public float speed = 5f;

    public bool laserActive;

    [SerializeField] private bool autoShoot = true;

    public bool isGameStarted = false;

    public InvaderGenerator invaderGenerator;

    public int playerScore;

    [SerializeField] private GameObject moveButtons;
    private float objectHeight;
    private float objectWidth;

    private Vector2 screenBounds;

    private void Start()
    {
        //EnableOrDisableButtonsBasedOnPlatform();
        
        // Screen Bounds
        screenBounds =
            Camera.main.ScreenToWorldPoint(new Vector3(Screen.width, Screen.height, Camera.main.transform.position.z));
        Debug.Log("screenbounds: "+screenBounds);

        objectWidth = transform.GetComponent<SpriteRenderer>().bounds.size.x/2;
        objectHeight = transform.GetComponent<SpriteRenderer>().bounds.size.y/2;
        
        Aris.Utils.DebugToUIManager.m_Instance.DebugToUI(String.Format("Waiting"));

    }

    private void Update()
    {
        if (Input.anyKey)
        {
            ToggleGameStart();
        }
        
        // ===Debug===
        if (!isGameStarted)
        {
            //return;
        }


        PlayerMovement();
        PlayerAttack();

        // ===Debug===

        #region Debug options
        if (Input.GetKey(KeyCode.J))
        {
            autoShoot = !autoShoot;
        }

        if (Input.GetKey(KeyCode.K))
        {
            SpaceInvaderManager.m_Instance.WinSpaceInvader();
        }

        if (Input.GetKey(KeyCode.L))
        {
            SpaceInvaderManager.m_Instance.LoseSpaceInvader();
        }
        #endregion
    }


    private void LateUpdate()
    {
        // Screen Bounds
        Vector3 viewPos = transform.position;
        viewPos.x = Mathf.Clamp(viewPos.x, screenBounds.x *(- 1f) + objectWidth, screenBounds.x - objectWidth);
        viewPos.y = Mathf.Clamp(viewPos.y, screenBounds.y *(- 1f) + objectHeight, screenBounds.y - objectHeight);
        transform.position = viewPos;
        
    }

    public void ToggleGameStart()
    {
        if (!isGameStarted)
        {
            isGameStarted = true;
            invaderGenerator.StartMissleAttack();
            playerScore = 0;
            //GetComponent<SpriteRenderer>().color = new Color(255, 245, 180);
            Aris.Utils.DebugToUIManager.m_Instance.DebugToUI(String.Format("Game Started!"));

        }
        else
        {
            return;
        }
    }

    private void EnableOrDisableButtonsBasedOnPlatform()
    {
         if(isMobile() == true)    return;
        
        moveButtons.SetActive(false);
    }

    private void PlayerMovement()
    {
        if (Input.GetKey(KeyCode.A) || Input.GetKey(KeyCode.LeftArrow))
        {
            this.transform.position += Vector3.left * speed * Time.deltaTime;
        }
        else if (Input.GetKey(KeyCode.D) || Input.GetKey(KeyCode.RightArrow))
        {
            this.transform.position += Vector3.right * speed * Time.deltaTime;
        }
    }

    private void PlayerAttack()
    {
        if(isGameStarted==false)    return;
        if (Input.GetKey(KeyCode.Space) || autoShoot)
        {
            Shoot();
        }
        if (isMobile() == false)
        {


        }
        else
        {
            // use button
            return;
        }
    }

    public void MoveLeft()
    {
        this.transform.position += Vector3.left * speed * Time.deltaTime;
    }

    public void MoveRight()
    {
        this.transform.position += Vector3.right * speed * Time.deltaTime;
    }


    public void Shoot()
    {
        if (!laserActive)
        {
            Projectile projectile = Instantiate(laserPrefab, transform.position, Quaternion.identity);
            laserActive = true;

            projectile.destroyed += LayserDestroyed;
            //sfx
            SpaceInvaderManager.m_Instance.PlayShootSFX();
        }
    }

    public void LayserDestroyed()
    {
        laserActive = false;
    }

    public void PlayerDamage()
    {
        Debug.Log("Damage");
        SpaceInvaderManager.m_Instance.LoseSpaceInvader();
    }

    public void GetScore()
    {
        playerScore++;
    }

    #region WebGL is on mobile check

    [DllImport("__Internal")]
    private static extern bool IsMobile();

    public bool isMobile()
    {
#if !UNITY_EDITOR && UNITY_WEBGL
        return IsMobile();
#endif
        return false;
    }

    #endregion
}

}