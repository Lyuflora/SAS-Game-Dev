using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

namespace Aris.Utils
{

    public class DebugToUIManager : MonoBehaviour
    {
        public static DebugToUIManager m_Instance;
        
        public TMPro.TextMeshProUGUI textUI;

        private void Awake()
        {
            m_Instance = this;
        }

        public void DebugToUI(string message)
        {
            if (textUI!=null)
            {
                textUI.text = message;
            }

        }
    }
}