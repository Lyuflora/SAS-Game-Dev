using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class SceneInfo
{
    private string m_SceneName;
    
}

public struct Optional<T>
{
    [SerializeField] private bool enabled;
    [SerializeField] private T value;

    public bool Enabled => enabled;
    public T Value => value;
    
}


public class PublicMethods : MonoBehaviour
{
}
