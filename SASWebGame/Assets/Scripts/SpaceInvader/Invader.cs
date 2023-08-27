using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SAS
{

public class Invader : MonoBehaviour
{
    public Sprite[] animatedSprites;
    public float animationTime = 1f;

    private SpriteRenderer spriteRenderer;
    private int animationFrame = 0;

    public System.Action killed;

    public Animator animator;

    private void Awake()
    {
        spriteRenderer = GetComponent<SpriteRenderer>();
        animator = GetComponent<Animator>();
    }

    private void Start()
    {
        InvokeRepeating(nameof(AnimateSprite), this.animationTime, this.animationTime);
    }

    public void AnimateSprite()
    {
        animationFrame++;
        if (animationFrame >= this.animatedSprites.Length)
        {
            animationFrame = 0;
        }

        spriteRenderer.sprite = animatedSprites[animationFrame];
    }

    public void HideInvader()
    {
        this.gameObject.SetActive(false);
    }
    
    public void OnTriggerEnter2D(Collider2D other)
    {
        if(other.gameObject.tag == "Projectile")
        {
            this.GetComponent<Collider2D>().enabled = false;
            this.animator.SetTrigger("Killed");
            Aris.Utils.DebugToUIManager.m_Instance.DebugToUI("Killed");
            Debug.Log("Killed");
            this.killed.Invoke();
        }

        if (other.gameObject.tag == "Player")
        {
            other.gameObject.GetComponent<InvaderPlayer>().PlayerDamage();
        }
    }
}
    
}