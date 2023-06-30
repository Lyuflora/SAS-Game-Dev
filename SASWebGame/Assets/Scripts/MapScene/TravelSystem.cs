using System;
using System.Collections;
using System.Collections.Generic;
using SAS;
using UnityEngine;

public class TravelSystem : StateMachine
{
    #region Fields and Properties

    public int test;
    public bool largeMap;

    #endregion

    #region Execution

    private void Start()
    {
        SetState(new Begin(this));
    }

    public void OnTestButton()
    {
        StartCoroutine(State.Dothings());
    }

    public void OnFreshButton()
    {
        StartCoroutine(State.LoadProgress());
    }

    public void OnSaveButton()
    {
        StartCoroutine(State.SaveProgress());
    }
    #endregion

    #region State Specific Behaviors

    

    #endregion
}
