using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class Menu : MonoBehaviour
{
    public void LoadScenes(string scene)
    {
        PlayerController.faseController = "one";
        SceneManager.LoadScene(scene);
        Time.timeScale = 1f;
    }
}
