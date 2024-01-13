using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class TimeController : MonoBehaviour
{
    public static TimeController tc;
    public Text timeText;
    public static float timeCount;
    public static bool timeIsOver;
    public static bool controlTimer;

    private void Start() 
    {
        controlTimer = true;
        timeIsOver = false; 
        timeCount = 30;   
    }

    // Update is called once per frame
    void Update()
    {
        if(timeCount < 0f)
        {
            timeIsOver = true;
            timeCount = 30;
            ButtonController.managerTimeIsOver = true;
            //ButtonControllerTwo.managerTimeIsOver = true;
            controlTimer = false;
        }else if(controlTimer)
        {
            TimeController.timeCount = TimeController.timeCount - Time.deltaTime;  
            timeText.text = timeCount.ToString("0");   
        }
    }

    IEnumerator WaitTwoSeconds(){
        yield return new WaitForSeconds(2);
    }
}
