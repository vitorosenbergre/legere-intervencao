using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadOnActivation5 : MonoBehaviour
{
    void OnEnable()
    {
        SceneManager.LoadScene("Six_SC", LoadSceneMode.Single);
    }
}
