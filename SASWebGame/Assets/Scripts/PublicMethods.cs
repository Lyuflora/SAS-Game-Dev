using System;
using System.Collections;
using System.Collections.Generic;
using SAS;
using Unity.VisualScripting;
using System.Linq;
using UnityEngine;

[Serializable]
public class SceneInfo
{
    private string m_SceneName;
}
[Serializable]
public enum SpotStatus
{
    Unvisited = 0,  // not visited
    Visited,    // visited, but not current
    Active, // current, only for debugging
    Locked, // not available *


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

public static class IntegerAndBinaryConverter
{
    /// <summary>
    /// 整数值转为二进制数组
    /// </summary>
    /// <param name="resultSize">最终二进制数组的大小，默认32</param>
    /// <returns>byte数组</returns>
    public static byte[] ToBinaryBits(this int integer, int resultSize = 32)
    {
        var result = new byte[resultSize];

        var binaryString = Convert.ToString(integer, 2);
        // 先把string转成char数组，再将char数组中每一个值转为byte（需要减去char类型0的值，即48）。
        var binaryBits = binaryString.ToCharArray().Select(i => (byte)(i - 48)).ToArray(); 
        var binarySize = binaryBits.Length;

        if (binarySize > resultSize)
        {
            throw new ArgumentException("设置的结果数组容量不足。");
        }

        Array.Copy(binaryBits, 0, result, resultSize - binaryBits.Length, binaryBits.Length);
        return result;
    }

    /// <summary>
    /// 二进制数组转整数
    /// </summary>
    /// <returns>整数值</returns>
    public static int FromBinaryToInt(this byte[] binaryBits)
    {
        if (binaryBits.Any(i => i != 0 && i != 1)) // 如果该数组包含有0/1之外的值，则抛出异常
        {
            throw new ArgumentException("若要使用该方法，byte数组必须只包含0或1。");
        }
        return Convert.ToInt32(string.Join("", binaryBits), 2); 
    }
}
public class PublicMethods : MonoBehaviour
{}
