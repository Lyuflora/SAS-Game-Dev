using System;
using System.Collections;
using System.Collections.Generic;
using JetBrains.Annotations;
using UnityEngine;
using UnityEngine.Serialization;

[Serializable]
public class MapPath
{
    public List<Transform> m_Waypoints;
    public MapSpot m_Destination;
    public MapSpot m_Origin;
    public bool m_Dual = true;
}

public class PathManager : MonoBehaviour
{
    public static PathManager m_Instance;
    
    [SerializeField]
    private List<MapPath> m_PathList;

    [NotNull] public Dictionary<MapSpot, MapPath> m_Map;

    private MapPath m_ChosenPath;
    private MapSpot m_CurrentSpot;
    
    public bool isMoving;

    [SerializeField]
    private float moveSpeed = 2f;

    private float threshold = 0.01f;

    private void Awake()
    {
        m_Instance = this;
    }

    private void Start()
    {
        isMoving = false;
        // set start path
        m_ChosenPath = m_PathList[0];

        m_Map = new Dictionary<MapSpot, MapPath>();
        
        foreach (var pathInfo in m_PathList)
        {
            m_Map.Add(pathInfo.m_Destination, pathInfo);
        }
        
    }

    public void SetCurrentPath(MapSpot r_Spot)
    {
        if (!m_Map.TryGetValue(r_Spot, out m_ChosenPath))
        {
            return;
        }
        
        StartCoroutine(nameof(MoveAlongCurrentPath));
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.V))
        {
            StartCoroutine(nameof(MoveAlongCurrentPath));
        }
    }

    IEnumerator MoveAlongCurrentPath()
    {
        // set initial position
        if (m_ChosenPath.m_Waypoints.Count == 0)
        {
            yield return null;
        }
        transform.position = m_ChosenPath.m_Waypoints[0].transform.position;
        isMoving = true;

        for (int i = 0; i < m_ChosenPath.m_Waypoints.Count; i++)
        {

            while (Vector2.Distance(transform.position, m_ChosenPath.m_Waypoints[i].transform.position) > threshold)
            {
                Debug.Log("move in path " + i + "distance: " + Vector2.Distance(transform.position, m_ChosenPath.m_Waypoints[i].transform.position));
                transform.position = Vector2.MoveTowards(transform.position, m_ChosenPath.m_Waypoints[i].transform.position, moveSpeed * Time.deltaTime);
                yield return new WaitForEndOfFrame();
            }


        }
        isMoving = false;
        yield return null;

    }


    private void Move()
    {

    }
}
