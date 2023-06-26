using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;
public class SaveSerial : MonoBehaviour
{
    int intToSave;
    float floatToSave;
    bool boolToSave;
    private List<SpotRecord> spotsToSave;
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
    
    [Serializable]
    class SaveData
    {
        public int savedInt;
        public float savedFloat;
        public bool savedBool;

        //public List<SpotRecord> savedSpots;
    }
    
    [Serializable]
    class SpotRecord
    {
        public MapSpot spot;
        public SpotStatus status;
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
        
        // data.savedSpots = new List<SpotRecord>();
        // data.savedSpots.Clear();
        // foreach (var spot in SpotManager.m_Instance.m_SpotList)
        // {
        //     SpotRecord record = new SpotRecord();
        //     record.spot = spot;
        //     record.status = spot.m_Status;
        //     data.savedSpots.Add(record);
        // }
        
        bf.Serialize(file, data);
        file.Close();
        Debug.Log("Game data saved!");
    }
    
    
    public void LoadGame()
    {
        if (File.Exists(Application.persistentDataPath 
                        + "/MySaveData.dat"))
        {
            BinaryFormatter bf = new BinaryFormatter();
            FileStream file = 
                File.Open(Application.persistentDataPath 
                          + "/MySaveData.dat", FileMode.Open);
            
            if (file.Length == 0)
                return;
            
            SaveData data = (SaveData)bf.Deserialize(file);
            file.Close();
            intToSave = data.savedInt;
            floatToSave = data.savedFloat;
            boolToSave = data.savedBool;
            
            // spotsToSave.Clear();
            // foreach (var spotRecord in data.savedSpots)
            // {
            //     spotsToSave.Add(spotRecord);
            // }
            
            Debug.Log("Game data loaded!");
        }
        else
            Debug.LogError("There is no save data!");
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
            
            // spotsToSave.Clear();
            // foreach (var spot in SpotManager.m_Instance.m_SpotList)
            // {
            //     SpotRecord record = new SpotRecord();
            //     record.spot = spot;
            //     record.status = spot.m_Status;
            //     spotsToSave.Add(record);
            // }
            
            Debug.Log("Data reset complete!");
        }
        else
            Debug.LogError("No save data to delete.");
    }
}
