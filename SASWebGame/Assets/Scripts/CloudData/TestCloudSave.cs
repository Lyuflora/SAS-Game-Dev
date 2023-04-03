using System;
using Unity.Services.Core;
using Unity.Services.Core.Environments;
using Unity.Services.Authentication;
using Unity.Services.CloudSave;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;



public class TestCloudSave : MonoBehaviour
{
    public string environment = "production";

    async void Start()
    {
        try
        {
            var options = new InitializationOptions()
                .SetEnvironmentName(environment);

            await UnityServices.InitializeAsync(options);
            await AuthenticationService.Instance.SignInAnonymouslyAsync();
            var data = new Dictionary<string, object> { { "MySaveKey", "HelloWorld" } };
            await CloudSaveService.Instance.Data.ForceSaveAsync(data);


        }
        catch (Exception exception)
        {
            // An error occurred during services initialization.
        }
    }
}
