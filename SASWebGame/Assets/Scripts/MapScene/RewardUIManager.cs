using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SAS
{
    public class RewardUIManager : MonoBehaviour
    {
        public GameObject spReward;

        private void Awake()
        {

        }

        void Start()
        {
            spReward.SetActive(false);
            if (PlayerStatus.m_Instance.CheckReceivedSPReward())
            {
                spReward.SetActive(true);
            }
        }

        // Update is called once per frame
        void Update()
        {

        }
    }
}