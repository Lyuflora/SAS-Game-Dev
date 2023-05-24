using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.SceneManagement;

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
    
    public void ToggleGameStart()
    {
        if (!isGameStarted)
        {
            isGameStarted = true;
            invaderGenerator.StartMissleAttack();
            playerScore = 0;
        }
        else
        {
            return;
        }
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

    private void EnableOrDisableButtonsBasedOnPlatform()
    {
        if(isMobile() == true)    return;
        
        moveButtons.SetActive(false);
    }
    private void PlayerMovement()
    {
        if (isMobile() == false)
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
        else
        {
            // use buttons
            return;
        }
    }

    private void PlayerAttack()
    {
        if (isMobile() == false)
        {
            if (Input.GetKey(KeyCode.Space) || autoShoot)
            {
                Shoot();
            }

        }
        else
        {
            // use button
            return;
        }
    }

    private void Start()
    {
        EnableOrDisableButtonsBasedOnPlatform();
    }

    private void Update()
    {
        if (Input.anyKey)
        {
            Debug.Log("any key");
            ToggleGameStart();
        }
        if (!isGameStarted)
        {
            return;
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
            Debug.Log("Shoot");
            projectile.destroyed += LayserDestroyed;
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
}