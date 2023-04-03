using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NPCController : MonoBehaviour, Interactables
{
    public Fungus.Flowchart npcFlowchart; // Link the Flowchart in your script
    public string npcBlock;
    
    public void Interact()
    {
        Debug.Log("Interact with NPC "+ gameObject.name);
        npcFlowchart.ExecuteBlock(npcBlock);
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
