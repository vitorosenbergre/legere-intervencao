using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadOnActivation4 : MonoBehaviour
{
    void OnEnable()
    {
        SceneManager.LoadScene("Five_SC", LoadSceneMode.Single);
    }
}
