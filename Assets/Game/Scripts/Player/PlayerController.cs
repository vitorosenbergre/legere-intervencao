using UnityEngine.SceneManagement;
using System.Collections.Generic;
using Platformer2D.Character;
using System.Collections;
using UnityEngine;
using Unity.VisualScripting;

[RequireComponent(typeof(CharacterMovement2D))]
[RequireComponent(typeof(CharacterFacing2D))]
[RequireComponent(typeof(PlayerInput))]


public class PlayerController : MonoBehaviour
{
    CharacterMovement2D playerMovement;
    CharacterFacing2D playerFacing;
    PlayerInput playerInput;

    public AudioSource jump;
    public AudioSource pickUpCoin;
    public AudioSource footstep;

    public bool managerHorizontalMovement;

    [Header("Camera")]

    public Transform cameraTarget;
    [Range(0.0f, 5.0f)]
    public float cameraTargetOffsetX = 2.0f;
    [Range(0.5f, 50.0f)]
    public float cameraTargetFlipSpeed = 2.0f;
    [Range(0.0f, 5.0f)]
    public float characterSpeedInfluence = 2.0f;
    private GameController gcPlayer;
    public static string faseController = "one";


    void Start()
    {
        Time.timeScale = 1f;
        gcPlayer = GameController.gc;
        GameController.coins = 0;
        playerMovement = GetComponent<CharacterMovement2D>(); 
        playerInput = GetComponent<PlayerInput>();
        playerFacing = GetComponent<CharacterFacing2D>();
        managerHorizontalMovement = true;
    }

    // Update is called once per frame
    void Update()
    {
        // Movementet to left and right
        Vector2 movementInput = playerInput.GetMovementInput();
        playerMovement.ProcessMovementInput(movementInput);
        
        playerFacing.UpdateFacing(movementInput);

        // Jump movement
        if(playerInput.IsJumpButtonDown())
        {
            jump.Play();
            playerMovement.Jump();
        }
        if (playerInput.IsMoving() && managerHorizontalMovement)
        {
            managerHorizontalMovement = false;
            StartCoroutine(WaitForOneSecond());
        }


        // Crouch movement
        if (playerInput.IsCrouchButtonDown()) 
        {
            playerMovement.Crouch();
        }
        else if (playerInput.IsCrouchButtonUp())
        {
            playerMovement.UnCrouch();
        }


        switch (faseController)
        {
            case "one":
                FaseOneTransitions();
                break;
            case "two":
                FaseTwoTransitions();
                break;
            case "three":
                FaseThreeTransitions();
                break;
            case "four":
                FaseFourTransitions();
                break;
            case "five":
                FaseFiveTransitions();
                break;
            case "six":
                FaseSixTransitions();
                break;
            case "seven":
                FaseSevenTransitions();
                break;
        }
    }

    private void FaseZeroTransitions()
    {
        if (GameController.coins == 6 && GameController.acessToPartOne)
        {
            GameController.acessToPartOne = false;
            StartCoroutine(WaitChangeScene("FaseOne"));
        }

        //Change to fase02

        if (GameController.coins == 6 && GameController.acessToPartTwo)
        {
            GameController.acessToPartTwo = false;
            ButtonController.managerPart = true; // pra atualizar a fase 2 quando entrar
            StartCoroutine(WaitChangeScene("FaseOne"));
        }

        if (GameController.coins == 9 && GameController.acessToPartThree)
        {
            GameController.acessToPartThree = false;
            ButtonController.managerPart = true; // pra atualizar a fase 3 quando entrar
            StartCoroutine(WaitChangeScene("FaseOne"));
        }
    }

    private void FaseOneTransitions()
    {
        if (GameController.coins == 6)
        {
            StartCoroutine(WaitChangeScene("FaseOne"));
        }
    }

    private void FaseTwoTransitions()
    {
        if (GameController.coins == 6)
        {
            StartCoroutine(WaitChangeScene("FaseTwo"));
        }
    }

    private void FaseThreeTransitions()
    {
        if (GameController.coins == 6)
        {
            StartCoroutine(WaitChangeScene("FaseThree"));
        }
    }

    private void FaseFourTransitions()
    {
        if (GameController.coins == 6)
        {
            StartCoroutine(WaitChangeScene("FaseFour"));
        }
    }

    private void FaseFiveTransitions()
    {
        if (GameController.coins == 6)
        {
            StartCoroutine(WaitChangeScene("FaseFive"));
        }
    }

    private void FaseSixTransitions()
    {
        if (GameController.coins == 6)
        {
            StartCoroutine(WaitChangeScene("FaseSix"));
        }
    }

    private void FaseSevenTransitions()
    {
        if (GameController.coins == 9)
        {
            StartCoroutine(WaitChangeScene("FaseSeven"));
        }
    }

    private void FixedUpdate() 
    {
        // camera controll

        bool isFacingRight = playerFacing.isFacingRight();
        float targetOffsetX = isFacingRight ? cameraTargetOffsetX : -cameraTargetOffsetX;

        float currentOfsetX = Mathf.Lerp(cameraTarget.localPosition.x, targetOffsetX, Time.fixedDeltaTime * cameraTargetFlipSpeed); 

        currentOfsetX =playerMovement.CurrentVelocity.x * Time.fixedDeltaTime * characterSpeedInfluence;

        cameraTarget.localPosition = new Vector3(currentOfsetX, cameraTarget.localPosition.y, cameraTarget.localPosition.z);
    }

     private void OnTriggerEnter2D(Collider2D collision) 
    {
        if(collision.gameObject.tag == "Coins")
        {
            Destroy(collision.gameObject);
            pickUpCoin.Play();
            GameController.coins++;
            if(faseController == "seven")
            {
                gcPlayer.coinsText.text = GameController.coins.ToString() + "/9";
            }
            else
            {
                gcPlayer.coinsText.text = GameController.coins.ToString() + "/6";
            }
        }     
    }

    IEnumerator WaitChangeScene(string scene){
        Time.timeScale  = 1f;
        yield return new WaitForSeconds(1);
        SceneManager.LoadScene(scene);
    }

    IEnumerator WaitForOneSecond()
    {
        footstep.Play();
        yield return new WaitForSeconds(1);
        managerHorizontalMovement = true;
    }
}
