using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameController : MonoBehaviour
{
    public static GameController gc;
    public Text coinsText;
    public static int coins;

    public static bool acessToPartOne = true;

    public static bool acessToPartTwo = false;

    public static bool acessToPartThree = false;

    void Awake()
    {
        if(gc == null)
        {
            gc = this; 
        }else if (gc != this)
        {
            Destroy(gameObject);
        }
    }
}
