using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SAS
{
    

public class Projectile : MonoBehaviour
{
    public Vector3 direction;

    public float speed;
    public System.Action destroyed;
    public bool isHazardous;

    private void Update()
    {
        transform.position = transform.position + direction * speed * Time.deltaTime;

        if (transform.position.y > 16f)
        {
            this.destroyed.Invoke();
            Destroy(this.gameObject);
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Player")
        {
            Debug.Log("TriggerEnter Player");
            if (!isHazardous)
            {
                Physics2D.IgnoreCollision(collision.gameObject.GetComponent<Collider2D>(), GetComponent<Collider2D>());
                
            }
            else if (isHazardous)
            {
                // Damage
                collision.gameObject.GetComponent<InvaderPlayer>().PlayerDamage();
            }

        }
        
        else
        {
            // evoke the events
            if (this.destroyed != null)
            {
                this.destroyed.Invoke();
            }
            Destroy(this.gameObject);
        }

    }
}
}