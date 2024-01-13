using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LifeController
{
    private int lifecount = 3;

    private bool status = true;

    public void DecreaseLife(){
        if(lifecount == 1)
        {
            status = false;
        }
            lifecount--;
    }

    public void IncreaseLife(){
        lifecount++;
    }

    public bool getStatus(){
        return status;
    }

    public void setStatus(bool status){
        this.status = status;
    }

    public int getLifeCont(){
        return lifecount;
    }

}
