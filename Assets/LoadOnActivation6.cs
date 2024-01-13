using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadOnActivation6 : MonoBehaviour
{
    void OnEnable()
    {
        SceneManager.LoadScene("Seven_SC", LoadSceneMode.Single);
    }
}
