using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SAS
{
    public class App : MonoBehaviour
    {
        public static App m_Instance;
        
        [SerializeField]
        private Manifest m_level1;

        private void Awake()
        {
            m_Instance = this;
        }

        public Manifest GetLevel1Preset()
        {
            return m_level1;
        }
    }
}