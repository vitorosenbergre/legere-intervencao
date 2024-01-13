using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RealPlayerAnimationController : PlayerAnimationController
{
    protected override void Update() 
    {
        base.Update();
        animator.SetBool(CharacterMovementAnimationKeys.IsCrouching, characterMovement.IsCrouching); 
        animator.SetFloat(CharacterMovementAnimationKeys.VerticalSpeed, characterMovement.CurrentVelocity.y / characterMovement.JumpSpeed);
        animator.SetBool(CharacterMovementAnimationKeys.IsGrounded, characterMovement.IsGrounded);    
    }
}
