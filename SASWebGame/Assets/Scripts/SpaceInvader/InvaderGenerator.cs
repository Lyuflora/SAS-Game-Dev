using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace SAS
{
    public class InvaderGenerator : MonoBehaviour
    {
        public List<Invader> invaders;
        public int rows = 5;
        public int cols = 11;


        // Movement
        public AnimationCurve speed;
        Vector3 direction = Vector2.right;

        public float missileAttackRate = 1f;
        public Projectile missilePrefab;

        private bool isGameStarted = false;

        public int amountKillled { get; private set; }


        public int totalInvaders => this.rows * this.cols;
        public float percentKilled => (float)amountKillled / (float)totalInvaders; // 0-1
        private int amountAlive => this.totalInvaders - this.amountKillled;

        [SerializeField] private InvaderPlayer player;

        private void Awake()
        {
            for (int row = 0; row < rows; row++)
            {
                float width = 2.0f * (cols - 1);
                float height = 2.0f * (rows - 1);
                Vector2 centering = new Vector2(-width / 2, -height / 2);
                Vector3 rowPosition = new Vector3(centering.x, centering.y + (row * 4.0f), 0.0f);


                for (int col = 0; col < cols; col++)
                {
                    Invader invader = Instantiate(invaders[row], transform);
                    invader.killed += InvaderKilled;
                    Vector3 position = rowPosition;
                    position.x += col * 4.0f;
                    invader.transform.localPosition = position;
                }
            }
        }

        private Vector3 _leftEdge;
        private Vector3 _rightEdge;

        private void Start()
        {
            isGameStarted = false;

            _leftEdge = Camera.main.ViewportToWorldPoint(Vector3.zero);
            _rightEdge = Camera.main.ViewportToWorldPoint(Vector3.right);
        }

        // Called by the IncaderPlayer
        public void StartMissleAttack()
        {
            isGameStarted = true;
            InvokeRepeating(nameof(MissileAttack), this.missileAttackRate, this.missileAttackRate);

        }

        private void Update()
        {
            if (isGameStarted == false) return;
            this.transform.position += direction * (speed.Evaluate(percentKilled) * Time.deltaTime);

            foreach (Transform invader in this.transform)
            {
                if (!invader.gameObject.activeInHierarchy)
                {
                    continue;
                }

                if (direction == Vector3.right && invader.position.x >= (_rightEdge.x - 1f))
                {
                    AdvanceRow();
                }
                else if (direction == Vector3.left && invader.position.x <= (_leftEdge.x + 1f))
                {
                    AdvanceRow();
                }
            }

        }

        public void AdvanceRow()
        {
            direction.x *= -1f;

            Vector3 position = this.transform.position;

            if (isGameStarted)
            {
                position.y -= 1f;
            }

            this.transform.position = position;

        }

        public void InvaderKilled()
        {
            amountKillled += 1;
            Aris.Utils.DebugToUIManager.m_Instance.DebugToUI(String.Format("kill: {0}, total: {1}, percent: {2}",
                amountKillled, totalInvaders, percentKilled));
            player.GetScore();
            // sfx
            SpaceInvaderManager.m_Instance.PlayKillSFX();

            if (amountKillled >= totalInvaders)
            {
                SpaceInvaderManager.m_Instance.WinSpaceInvader();
            }
        }

        public void MissileAttack()
        {
            Debug.Log("Missile Attack");

            foreach (Transform invader in this.transform)
            {
                if (invader.gameObject.activeInHierarchy)
                {
                    continue;
                }

                if (UnityEngine.Random.Range(0, 1f) < (1f / (float)amountAlive)) //(1f / (float)amountAlive)
                {
                    var missile = Instantiate(missilePrefab, invader.position, Quaternion.identity);
                    missile.transform.parent = this.transform;
                    break;
                }
            }
        }

    }
}