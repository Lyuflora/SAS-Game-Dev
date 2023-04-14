using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SAS {
    [CreateAssetMenu(fileName = "NewManifest", menuName = "SAS/Manifest", order = 2)]
    
    public class Manifest : ScriptableObject
    {
        public static Manifest m_Instance;

        public List<SpotFound> m_Preset;

        private void Awake()
        {
            m_Instance = this;
        }
        
        public void Start()
        {
        }

    }
    [Serializable]
    public class SpotFound
    {
        public SpotInfo spot;
        public bool isActivePreset;
    }
    [Serializable]
    public class PlayerHistory
    {
        public List<SpotInfo> spotVisitingRecord;
        public bool preset;
    }
}