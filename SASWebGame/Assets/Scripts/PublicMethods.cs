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
    [SerializeField] private string option;
    [SerializeField] private string block;
}
public class PublicMethods : MonoBehaviour
{
}
