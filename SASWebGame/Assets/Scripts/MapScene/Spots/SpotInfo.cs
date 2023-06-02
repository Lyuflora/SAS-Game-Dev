using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "NewTravelEvent", menuName = "SAS/SpotInfo", order = 2)]

public class SpotInfo : ScriptableObject
{
    public Sprite spotPict;
    public SpotStatus status;
    [TextArea(3,10)]
    public string comments;
}
