using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SAS {
    [CreateAssetMenu(fileName = "NewTravelEvent", menuName = "SAS/TravelEvent", order = 1)]
    
    public class TravelEvent : ScriptableObject
    {
        public Sprite eventPict;
        public string eventTitle;
        [TextArea(3,10)]
        public string eventText;

        [Header("Event Options")] public List<TravelEventOption> OptionList;
    }
    
}