using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Platformer2D.Character; 

public class PlayerAnimationController : MonoBehaviour
{
    public static class CharacterMovementAnimationKeys
    {
        public const string IsCrouching = "Crouch";
        public const string HorizontalSpeed = "HSpeed";
        public const string VerticalSpeed = "VSpeed";
        public const string IsGrounded = "IsGround";
    }

    public static class EnemyAnimationKeys
    {
        public const string IsChasing = "IsChasing";
    }

    protected Animator animator;
    protected CharacterMovement2D characterMovement;

    protected virtual void Awake() 
    {
        animator = GetComponent<Animator>(); 
        characterMovement = GetComponent<CharacterMovement2D>();
    }

    protected virtual void Update() 
    {
        animator.SetFloat(CharacterMovementAnimationKeys.HorizontalSpeed, characterMovement.CurrentVelocity.x /characterMovement.MaxGroundSpeed);
    } 
}
