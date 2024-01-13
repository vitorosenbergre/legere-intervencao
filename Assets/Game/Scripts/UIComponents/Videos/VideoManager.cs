using System.Collections;
using System.Collections.Generic;
using System.Threading;
//using UnityEditor.SearchService;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.Video;

public class VideoManager : MonoBehaviour
{
    public RawImage rawImage;
    public VideoPlayer videoPlayer;
    public AudioSource menuAudio;

    // Start is called before the first frame update
    public void Start()
    {
        rawImage.enabled = false;
        videoPlayer.enabled = false;
        menuAudio.loop = true;
        menuAudio.Play();
    }

    // primeiro video
    public void Starter()
    {
        //menuAudio.Stop();
        // rawImage.enabled = true;
        //videoPlayer.enabled = true;
        // videoPlayer.Play();
        //videoPlayer.loopPointReached += CheckOver;
        SceneManager.LoadScene("Cutscene0");
    }

    void CheckOver(UnityEngine.Video.VideoPlayer vp)
    {
        PlayerController.faseController = "one";
        Time.timeScale = 1f;
    }
}
