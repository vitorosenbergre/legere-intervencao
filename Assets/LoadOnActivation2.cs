using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;


public class LoadOnActivation2 : MonoBehaviour
{
    void OnEnable()
    {
        SceneManager.LoadScene("Three_SC", LoadSceneMode.Single);
    }
}
