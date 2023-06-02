using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SAS {
    [CreateAssetMenu(fileName = "NewManifest", menuName = "SAS/Manifest", order = 2)]
    
    public class Manifest : ScriptableObject
    {
        public List<SpotPreset> m_Preset;

    }
    [Serializable]
    public class SpotPreset
    {
        public SpotInfo spotInfo;
        public SpotStatus statusPreset;
    }

}