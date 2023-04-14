using System;
using UnityEngine;
using System.Collections;
using UnityEngine.Events;
using UnityEngine.EventSystems;
 
public class GameButton : MonoBehaviour, IPointerDownHandler, IPointerUpHandler {
 
    public bool buttonPressed;
    public UnityEvent buttonEvent;
 
    public void OnPointerDown(PointerEventData eventData){
        buttonPressed = true;

    }
 
    public void OnPointerUp(PointerEventData eventData){
        buttonPressed = false;
    }

    private void Update()
    {
        if (buttonPressed)
        {
            buttonEvent.Invoke();
        }
    }
}