using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class LoadOnActivation1 : MonoBehaviour
{
    void OnEnable()
    {
        SceneManager.LoadScene("Two_SC", LoadSceneMode.Single);
    }
}
