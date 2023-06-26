using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;
using UnityEngine.Serialization;

public class GameDataManager : MonoBehaviour
{
    
    [Serializable]
    class SaveData
    {
        public int savedInt;
        public float savedFloat;
        public bool savedBool;

        public int spot0;
        public int spot1;
        public int spot2;
        public int spot3;

        public int savedCurrentSpot;
    }
    int intToSave;
    float floatToSave;
    bool boolToSave;   
    public List<int> recordsToSave;
    public MapSpot currentSpotToSave;
    
    // void OnGUI()
    // {
    //     if (GUI.Button(new Rect(0, 0, 125, 50), "Raise Integer"))
    //         intToSave++;
    //     if (GUI.Button(new Rect(0, 100, 125, 50), "Raise Float"))
    //         floatToSave += 0.1f;
    //     if (GUI.Button(new Rect(0, 200, 125, 50), "Change Bool"))
    //         boolToSave = boolToSave ? boolToSave 
    //             = false : boolToSave = true;
    //     GUI.Label(new Rect(375, 0, 125, 50), "Integer value is " 
    //                                          + intToSave);
    //     GUI.Label(new Rect(375, 100, 125, 50), "Float value is " 
    //                                            + floatToSave.ToString("F1"));
    //     GUI.Label(new Rect(375, 200, 125, 50), "Bool value is " 
    //                                            + boolToSave);
    //     if (GUI.Button(new Rect(750, 0, 125, 50), "Save Your Game"))
    //         SaveGame();
    //     if (GUI.Button(new Rect(750, 100, 125, 50), 
    //             "Load Your Game"))
    //         LoadGame();
    //     if (GUI.Button(new Rect(750, 200, 125, 50), 
    //             "Reset Save Data"))
    //         ResetData();
    // }


    public void VisitSpot(int spotId)
    {
        recordsToSave[spotId] = 1;
        // switch (spotId)
        // {
        //     case 0:
        //         recordsToSave[0] = 1;
        //         break;
        //     case 1:
        //         recordsToSave[1] = 1; 
        //         break;
        //     case 2:
        //         recordsToSave[2] = 1; 
        //         break;
        //     case 3:
        //         recordsToSave[3] = 1; 
        //         break;
        // }
    }
    
    public void SaveGame()
    {
        BinaryFormatter bf = new BinaryFormatter(); 
        FileStream file = File.Create(Application.persistentDataPath 
                                      + "/MySaveData.dat"); 
        SaveData data = new SaveData();
        data.savedInt = intToSave;
        data.savedFloat = floatToSave;
        data.savedBool = boolToSave;

        data.spot0 = recordsToSave[0];
        data.spot1 = recordsToSave[1];
        data.spot2 = recordsToSave[2];
        data.spot3 = recordsToSave[3];

        data.savedCurrentSpot = SpotManager.m_Instance.CurrentSpot.id;
        
        Debug.Log("save records");
        foreach (var r in recordsToSave)
        {
            Debug.Log(r);
        }
        
        bf.Serialize(file, data);
        file.Close();
        Debug.Log("Game data saved!");
    }
    public bool LoadGame()
    {
        if (File.Exists(Application.persistentDataPath 
                        + "/MySaveData.dat"))
        {
            BinaryFormatter bf = new BinaryFormatter();
            FileStream file = 
                File.Open(Application.persistentDataPath 
                          + "/MySaveData.dat", FileMode.Open);
            SaveData data = (SaveData)bf.Deserialize(file);
            file.Close();
            intToSave = data.savedInt;
            floatToSave = data.savedFloat;
            boolToSave = data.savedBool;

            recordsToSave = new List<int>();
            recordsToSave.Clear();
            recordsToSave.Add(data.spot0);
            recordsToSave.Add(data.spot1);
            recordsToSave.Add(data.spot2);
            recordsToSave.Add(data.spot3);

            currentSpotToSave = SpotManager.m_Instance.m_SpotList[data.savedCurrentSpot];
            currentSpotToSave.m_Status = SpotStatus.Active;
            
            Debug.Log("load records");
            foreach (var r in recordsToSave)
            {
                Debug.Log(r);
            }
            

            Debug.Log("Game data loaded!");
            return true;
        }
        else
        {
            Debug.LogWarning("There is no save data!");
            // create a new save
            recordsToSave = new List<int>();
            recordsToSave.Clear();
            recordsToSave.Add(0);
            recordsToSave.Add(0);
            recordsToSave.Add(0);
            recordsToSave.Add(0);

            return false;
        }
    }
    
    public void ResetData()
    {
        if (File.Exists(Application.persistentDataPath 
                        + "/MySaveData.dat"))
        {
            File.Delete(Application.persistentDataPath 
                        + "/MySaveData.dat");
            intToSave = 0;
            floatToSave = 0.0f;
            boolToSave = false;
            
            for (int i =1; i < recordsToSave.Count; i++)
            {
                recordsToSave[i] = 0;
            }

            SpotManager.m_Instance.LoadForFirstTime();
            Debug.Log("Data reset complete!");
        }
        else
            Debug.LogWarning("No save data to delete.");
    }
}
