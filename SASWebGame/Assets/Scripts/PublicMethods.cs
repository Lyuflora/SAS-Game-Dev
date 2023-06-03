using System;
using System.Collections;
using System.Collections.Generic;
using SAS;
using Unity.VisualScripting;
using UnityEngine;

[Serializable]
public class SceneInfo
{
    private string m_SceneName;
    
}
[Serializable]
public enum SpotStatus
{
    Unvisited = 0,
    Visited,
    Active,
    Locked,
}

[Serializable]
public enum IntStatus
{
    canInteract = 0,
    disabled,
}

[Serializable]
public struct Optional<T>
{
    [SerializeField] private bool enabled;
    [SerializeField] private T value;

    public Optional(T initialValue)
    {
        enabled = true;
        value = initialValue;
    }
    public bool Enabled => enabled;
    public T Value => value;

}

[Serializable]
public struct TravelEventOption
{
    [SerializeField] public string option;
    [SerializeField] public string block;
}
public class PublicMethods : MonoBehaviour
{
}
