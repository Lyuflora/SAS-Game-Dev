using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public float moveSpeed;
    private bool isMoving;
    private Vector2 input;

    private Rigidbody2D playerRigidbody;

    private Animator animator;

    [SerializeField]
    private LayerMask solidObjLayer;
    [SerializeField]
    private LayerMask interactableLayer;

    // pickup
    PickUp pickUp;
    private void Awake()
    {
        animator = GetComponent<Animator>();
    }

    private void Start()
    {
        //isMoving = true;
        //Debug.Log("start");
        playerRigidbody = GetComponent<Rigidbody2D>();
        pickUp = GetComponent<PickUp>();
        pickUp.Direction = new Vector2(0, -1);
    }
    private void Update()
    {
        //if (!isMoving)
        {
            input.x = Input.GetAxisRaw("Horizontal");
            input.y = Input.GetAxisRaw("Vertical");

            if(input.x !=0)
            {
                input.y = 0;
            }

            if (input != Vector2.zero)
            {
                animator.SetFloat("moveX", input.x);
                animator.SetFloat("moveY", input.y);
                var targetPos = transform.position;
                targetPos.x += input.x;
                targetPos.y += input.y;


                if (isWalkable(targetPos))
                {
                    // no use
                    //StartCoroutine(Move(targetPos));
                    
                    MoveCharacter();
                    
                }

                if(input.sqrMagnitude > .1f)
                {
                    pickUp.Direction = input.normalized;
                }

            }
            else
            {
                isMoving = false;
            }
        }

        animator.SetBool("isMoving", isMoving);

        if (Input.GetKeyDown(KeyCode.Z))
        {
            Interact();
            Debug.Log("interact");
        }
    }

    public void Interact()
    {
        var facingDir = new Vector3(animator.GetFloat("moveX"), animator.GetFloat("moveY"));
        var interactPos = transform.position + facingDir;

        // Debug.DrawLine(transform.position, interactPos, Color.red, 1f);

        // detect colliding objects
        var collider = Physics2D.OverlapCircle(interactPos, 0.2f, interactableLayer);
        if (collider != null)
        {
            collider.GetComponent<Interactables>()?.Interact();
        }
    }

    IEnumerator Move(Vector3 targetPos)
    {
        isMoving = true;
        while((targetPos-transform.position).sqrMagnitude > Mathf.Epsilon)
        {
            transform.position = Vector3.MoveTowards(transform.position, targetPos, moveSpeed * Time.deltaTime);
            yield return null;
        }
        transform.position = targetPos;
        isMoving = false;
    }

    private bool isWalkable(Vector3 pos)
    {
        if(Physics2D.OverlapCircle(pos, 0.1f, solidObjLayer | interactableLayer ) != null)
        {
            return false;
        }
        return true;
    }

    void MoveCharacter()
    {
        isMoving = true;
        playerRigidbody.MovePosition(transform.position + new Vector3(input.x, input.y, 0) * moveSpeed * 5f * Time.deltaTime);
    }
}
