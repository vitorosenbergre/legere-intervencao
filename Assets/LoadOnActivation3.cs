using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class LoadOnActivation3 : MonoBehaviour
{
    void OnEnable()
    {
        SceneManager.LoadScene("Four_SC", LoadSceneMode.Single);
    }
}
