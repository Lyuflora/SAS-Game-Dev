using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PickUp : MonoBehaviour
{
    public Transform holdSpot;
    public LayerMask pickUpMask;

    public Vector2 Direction { get; set; }
    private GameObject itemHolding;

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.E))
        {
            if (itemHolding)
            {
                itemHolding.transform.position = transform.position+ new Vector3(Direction.x, Direction.y, 0);
                itemHolding.transform.parent = null;
                if (itemHolding.GetComponent<Rigidbody2D>())
                {
                    itemHolding.GetComponent<Rigidbody2D>().simulated = true;
                }

                if (itemHolding.GetComponent<SpriteRenderer>()) itemHolding.GetComponent<SpriteRenderer>().sortingOrder = 1;
                Debug.Log(itemHolding);
                itemHolding = null;
            }
            else
            {
                Collider2D pickUpItem = Physics2D.OverlapCircle(new Vector2(transform.position.x, transform.position.y) + Direction, .4f, pickUpMask);
                if(pickUpItem)
                {
                    itemHolding = pickUpItem.gameObject;
                    itemHolding.transform.position = holdSpot.position;
                    itemHolding.transform.parent = transform;
                    if (itemHolding.GetComponent<Rigidbody2D>())
                    {
                        itemHolding.GetComponent<Rigidbody2D>().simulated = false;
                    }
                    itemHolding.GetComponent<SpriteRenderer>().sortingOrder = -1;
                }
            }
        }
    }

}
