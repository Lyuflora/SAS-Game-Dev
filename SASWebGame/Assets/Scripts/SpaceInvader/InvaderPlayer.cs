using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class InvaderPlayer : MonoBehaviour
{

    public Projectile laserPrefab;

    public float speed = 5f;

    public bool laserActive;

    [SerializeField]
    private bool autoShoot = true;

    public bool isGameStarted = false;

    public InvaderGenerator invaderGenerator;

    public void ToggleGameStart()
    {
        if (!isGameStarted)
        {
            isGameStarted = true;
            invaderGenerator.StartMissleAttack();
        }else{return;}
        
    }
    
    private void Update()
    {
        if (!isGameStarted)
        {
            return;
        }
        if (Input.GetKey(KeyCode.A) || Input.GetKey(KeyCode.LeftArrow))
        {
            this.transform.position += Vector3.left * speed * Time.deltaTime;
        }else if (Input.GetKey(KeyCode.D) || Input.GetKey(KeyCode.RightArrow))
        {
            this.transform.position += Vector3.right * speed * Time.deltaTime;
        }
        
        if (Input.GetKey(KeyCode.Space) || autoShoot)
        {
            Shoot();
        }

        // Debug
        if (Input.GetKey(KeyCode.K))
        {
            autoShoot = !autoShoot;
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

}
