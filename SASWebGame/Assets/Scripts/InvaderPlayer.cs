using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class InvaderPlayer : MonoBehaviour
{

    public Projectile laserPrefab;

    public float speed = 5f;

    public bool laserActive;

    private bool autoShoot = false;

    private void Update()
    {
        if (Input.GetKey(KeyCode.A) || Input.GetKey(KeyCode.LeftArrow))
        {
            this.transform.position += Vector3.left * speed * Time.deltaTime;
        }else if (Input.GetKey(KeyCode.D) || Input.GetKey(KeyCode.RightArrow))
        {
            this.transform.position += Vector3.right * speed * Time.deltaTime;
        }

        if (Input.GetKey(KeyCode.Space)||Input.GetMouseButtonDown(0) || autoShoot)
        {
            Shoot();
        }

        if (Input.GetKey(KeyCode.K))
        {
            autoShoot = !autoShoot;
        }
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
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }

}
