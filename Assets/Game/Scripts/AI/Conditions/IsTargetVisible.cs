using BBUnity.Conditions;
using Pada1.BBCore;
using Pada1.BBCore.Framework;
using Pada1.BBCore.Tasks;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Condition("Game/Perception/IsTargetVisible")]

public class IsTargetVisible : GOCondition
{   
    [InParam("Target")]
    private GameObject target;

    [InParam("AIVision")]
    private AIVision aiVision;
    
    [InParam("TargetMemoryDuration")]
    private float targetMemoryDuration;

    private float forgetTargetTime;

    public override bool Check()
    {
        if(aiVision.IsVisible(target))
        {
            forgetTargetTime = Time.time + targetMemoryDuration;
        }
        //return aiVision.IsVisible(target);
        return Time.time < forgetTargetTime;
    }
}
