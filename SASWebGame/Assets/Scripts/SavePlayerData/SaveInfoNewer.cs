using UnityEngine;
using System.Collections;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using System.Runtime.Serialization;
using System;
using System.Collections.Generic;
 
//this is SaveInfoNewer.cs
//this script saves and loads all the info we want
public class SaveInfoNewer : MonoBehaviour
{
    // public SlotLoader SlotLoader;
    //data is what is finally saved
    public Dictionary<string, int> data;

    public static SaveInfoNewer m_Instance;

    public string path;
    
    void Awake()
    {
        m_Instance = this;
        //LoadUpgradeData();
        LoadData();
        //WARNING! data.Clear() deletes EVERYTHING
        //data.Clear();
        //SaveData();
    }
 
    public void LoadData()
    {
        //this loads the data
        data = SaveInfoNewer.DeserializeData<Dictionary<string, int>>("PleaseWork.save");
        Debug.Log(data);
    }
 
    public void SaveData()
    {
        //this saves the data
        SaveInfoNewer.SerializeData(data, "PleaseWork.save");
    }
    public static void SerializeData<T>(T data, string path)
    {
        //this is just magic to save data.
        //if you're interested read up on serialization
        FileStream fs = new FileStream(path, FileMode.OpenOrCreate);
        BinaryFormatter formatter = new BinaryFormatter();
        try
        {
            formatter.Serialize(fs, data);
            Debug.Log("Data written to " + path + " @ " + DateTime.Now.ToShortTimeString());
        }
        catch (SerializationException e)
        {
            Debug.LogError(e.Message);
        }
        finally
        {
            fs.Close();
        }
    }
 
    public static T DeserializeData<T>(string path)
    {
        //this is the magic that deserializes the data so we can load it
        T data = default(T);
 
        if (File.Exists(path))
        {
            FileStream fs = new FileStream(path, FileMode.Open);
            try
            {
                BinaryFormatter formatter = new BinaryFormatter();
                data = (T)formatter.Deserialize(fs);
                Debug.Log("Data read from " + path);
            }
            catch (SerializationException e)
            {
                Debug.LogError(e.Message);
            }
            finally
            {
                fs.Close();
            }
        }
        return data;
    }
}
 