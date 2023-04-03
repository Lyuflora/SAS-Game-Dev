using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChallengerContoller : MonoBehaviour, Interactables
{
    public void Interact()
    {
        Debug.Log("Interact with Challenger " + gameObject.name);
    }

}
