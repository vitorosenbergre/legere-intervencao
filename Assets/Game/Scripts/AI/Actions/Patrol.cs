using Pada1.BBCore;
using Pada1.BBCore.Framework;
using Pada1.BBCore.Tasks;
using System.Collections;
using System.Collections.Generic;
using Platformer2D.Character;
using UnityEngine;

[Action("Game/Patrol")]

public class Patrol : BasePrimitiveAction
{
    [InParam("AIController")]
    private EnemyAIController aIController;

    [InParam("PatrolSpeed")]
    private float patrolSpeed;
    
    [InParam("CharacterMovement")]
    private CharacterMovement2D charMovement;

    public override void OnStart()
    {
        base.OnStart();
        aIController.StartCoroutine(TEMP_Walk());
        charMovement.MaxGroundSpeed = patrolSpeed;
    }

    public override TaskStatus OnUpdate()
    {
        return TaskStatus.RUNNING;
    }

    public override void OnAbort()
    {
        base.OnAbort();
        
        //
        aIController.StopAllCoroutines();
    }

    IEnumerator TEMP_Walk()
    {
        while(true)
        {
        aIController.movementInput.x = 1;
        yield return new WaitForSeconds(1.0f);
        aIController.movementInput.x = 0;
        yield return new WaitForSeconds(2.0f);
        aIController.movementInput.x = -1;
        yield return new WaitForSeconds(1.0f);
        aIController.movementInput.x = 0;
        yield return new WaitForSeconds(2.0f);
        }
    }
}
