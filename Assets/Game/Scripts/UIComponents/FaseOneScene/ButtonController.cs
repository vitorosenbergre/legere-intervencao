using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;

public class ButtonController : MonoBehaviour
{
    public Button listenButton;
    public Image leftImage;
    public Button leftButton;
    public Image rightImage;
    public Button rightButton;
     public AudioSource soundSource;
    public Text lifeText;
    public RawImage rawImage;
    public VideoPlayer videoPlayer;

    private LifeController lifeController = new LifeController();
    private SourceImage sourceImage =  new SourceImage();

    public static string actualAudio = "So40_So80";
    public static string actualLeftImage = "So40_So80";
    public static  string actualRightImage = "Su40_Su80";
    public static bool managerTimeIsOver = false;
    public static bool PartOneOn = true;
    public static bool PartTwoOn = false;
    public static bool PartThreeOn = false;
    public static int FaseOneCount = 0;
    public static string actualPart =  "one"; 
    public static bool managerPart;

    private void Start() 
    {
        rawImage.enabled = false;
        videoPlayer.enabled = false;
        Time.timeScale = 1f;    
        managerPart = true;
        StartCoroutine(PauseFromLoad());
    }

    private void Update() 
    {
        if (PlayerController.faseController == "one") {
            // atualiza para iniciar a part2
            if (GameController.coins == 6 && managerPart)
            {
                PartOneOn = false;
                PartTwoOn = true;
                actualPart = "two";
                managerPart = false;
                LoadScenePartTwo();
                StartCoroutine(PauseFromLoad());
            }

            //atualiza para iniciar a part3
            if (GameController.coins == 9 && managerPart)
            {
                PartTwoOn = false;
                PartThreeOn = true;
                actualPart = "three";
                managerPart = false;
                LoadScenePartThree();
                StartCoroutine(PauseFromLoad());
            }


            if (lifeController.getStatus() == false)
            {
                StartCoroutine(WaitGameOver());
                lifeController.setStatus(true);
                // game over
            }

            if (FaseOneCount == 3)
            {
                FaseOneCount = 0;
                StartCoroutine(WaitWinFaseOne());
            }
            // aqui verifica se acertou 3 questões

            if (TimeController.timeIsOver && managerTimeIsOver)
            {
                StartCoroutine(TimeIsOver(actualPart));
                managerTimeIsOver = false;
            }
        }
    }

    public void ClickLeft()
    {   
        if(lifeController.getStatus())
        {
            TimeController.controlTimer = false;
            setInteractableButtons(false);
            StartCoroutine(WaitLeftAcion());

        }
    }

    IEnumerator WaitGameOver(){
        yield return new WaitForSeconds(2);
        Time.timeScale = 0f;
        actualPart = "one";
        PartOneOn =  true;
        PartTwoOn = false;
        PartThreeOn = false;
        FaseOneCount = 0;
        actualAudio = "So40_So80";
        actualLeftImage = "So40_So80";
        actualRightImage = "Su40_Su80";
        SceneManager.LoadScene("GameOver");
    }

    IEnumerator WaitWinFaseOne(){
        yield return new WaitForSeconds(2);
        Time.timeScale = 0f;
        GameController.coins = 0;
        
        if(actualPart == "one")
        {
            //GameController.acessToPartOne = false;
            GameController.acessToPartTwo = true;

            SceneManager.LoadScene("SampleScene");
            Time.timeScale = 1f;
        }
        else if (actualPart == "two")
        {
            GameController.acessToPartTwo = false;
            GameController.acessToPartThree = true;

            SceneManager.LoadScene("SampleScene");
            Time.timeScale = 1f;
        }
        else
        {
            GameController.acessToPartThree = false;

            PlayerController.faseController = "two";

            Starter();

            //SceneManager.LoadScene("Two_SC");
            //Time.timeScale = 1f;
        }
    }

    IEnumerator TimeIsOver(string part){
        lifeController.DecreaseLife();
        Time.timeScale = 1f;
        yield return new WaitForSeconds(2);
        if(actualPart == "one")
        {
            LoadScenePartOne();
        }else if(actualPart == "two")
        {
            LoadScenePartTwo();
        }else
        {
            LoadScenePartThree();
        }
        TimeController.controlTimer = true;
    }

    IEnumerator WaitLeftAcion()
    {   
        if(actualLeftImage == actualAudio)
        {
            leftButton.GetComponent<Image>().color = Color.green;
            lifeController.IncreaseLife();
            FaseOneCount++;
        }else
        {
            leftButton.GetComponent<Image>().color = Color.red;
            lifeController.DecreaseLife();
        }

        if(lifeController.getStatus() && FaseOneCount!=3)
        {
            if(PartOneOn)
            {
                Time.timeScale = 1f;
                yield return new WaitForSeconds(2);
                LoadScenePartOne();
                TimeController.controlTimer = true;
            }else if(PartTwoOn)
            {
                Time.timeScale = 1f;
                yield return new WaitForSeconds(2);
                LoadScenePartTwo();
                TimeController.controlTimer = true;
            }else
            {
                Time.timeScale = 1f;
                yield return new WaitForSeconds(2);
                LoadScenePartThree();
                TimeController.controlTimer = true;
            }
        }
    }

    public void ClickRight()
    {
         if(lifeController.getStatus())
        {
            TimeController.controlTimer = false;
            setInteractableButtons(false);
            StartCoroutine(WaitRightAcion());
        }
    }

    IEnumerator WaitRightAcion()
    {    
        
        if(actualRightImage ==  actualAudio)
        {
            rightButton.GetComponent<Image>().color = Color.green;
            lifeController.IncreaseLife();
            FaseOneCount++;
        }else
        {
            rightButton.GetComponent<Image>().color = Color.red;
            lifeController.DecreaseLife();
        }

        // se continuar, lembrar de fazer o load toda vez que chamar a cena, tlgd

        if(lifeController.getStatus() && FaseOneCount!=3)
        {
            if(PartOneOn)
            {
                Time.timeScale = 1f;
                yield return new WaitForSeconds(2);
                LoadScenePartOne();
                TimeController.controlTimer =true;
            }else if(PartTwoOn)
            {
                Time.timeScale = 1f;
                yield return new WaitForSeconds(2);
                LoadScenePartTwo();
                TimeController.controlTimer =true;
            }else
            {
                Time.timeScale = 1f;
                yield return new WaitForSeconds(2);
                LoadScenePartThree();
                TimeController.controlTimer =true;
            }
        }
    }

    IEnumerator PauseFromLoad()
    {
        setInteractableButtons(false);


        yield return new WaitForSeconds(1);

        setInteractableButtons(true);
    }

    public void LoadScenePartOne()
    {   
        leftButton.GetComponent<Image>().color = Color.white;
        rightButton.GetComponent<Image>().color = Color.white;

        setLifeText();
        TimeController.timeCount = 30;
        // set Timetext

        int randomNumber = sourceImage.pickRandomNumber(2);
        int randomImage = sourceImage.pickRandomNumber(2);
        
        // load the clip
        actualAudio = sourceImage.pickString(randomNumber);
        soundSource.clip = Resources.Load<AudioClip>("Audio/Fase1/Parte1/" + actualAudio);

        // load images
        actualLeftImage = sourceImage.pickString(randomImage);
        leftImage.sprite = Resources.Load<Sprite>("RepresentacoesGraficas/Fase1/Parte1/" + actualLeftImage);

        if(randomImage == 1)
        {
            actualRightImage = sourceImage.pickString(0);
        }else
        {
            actualRightImage = sourceImage.pickString(1);
        }   

        rightImage.sprite = Resources.Load<Sprite>("RepresentacoesGraficas/Fase1/Parte1/" + actualRightImage);
        
        // liberar o uso dos botoes

        setInteractableButtons(true);

    }

    public void LoadScenePartTwo(){

        // padrao
        leftButton.GetComponent<Image>().color = Color.white;
        rightButton.GetComponent<Image>().color = Color.white;

        setLifeText();
        TimeController.timeCount = 30;
        
        int randomNumber = sourceImage.pickRandomNumber(4);
        int randomImage = sourceImage.pickRandomNumber(4);
        int randomDecision = sourceImage.pickRandomNumber(4);

            // garante que sao diferentes
        while(randomNumber == randomImage)
        {
            randomImage = sourceImage.pickRandomNumber(4);
        }
        
        // load the clip
        actualAudio = sourceImage.pickStringTwo(randomNumber);
        soundSource.clip = Resources.Load<AudioClip>("Audio/Fase1/Parte2/" + actualAudio);

        // load images
        if(randomDecision <=1){
            actualLeftImage = sourceImage.pickStringTwo(randomNumber);
            leftImage.sprite = Resources.Load<Sprite>("RepresentacoesGraficas/Fase1/Parte2/" + actualLeftImage);
            actualRightImage = sourceImage.pickStringTwo(randomImage);
            rightImage.sprite = Resources.Load<Sprite>("RepresentacoesGraficas/Fase1/Parte2/" + actualRightImage); 
        }else{
            actualRightImage = sourceImage.pickStringTwo(randomNumber);
            rightImage.sprite = Resources.Load<Sprite>("RepresentacoesGraficas/Fase1/Parte2/" + actualRightImage); 
            actualLeftImage = sourceImage.pickStringTwo(randomImage);
            leftImage.sprite = Resources.Load<Sprite>("RepresentacoesGraficas/Fase1/Parte2/" + actualLeftImage);
        }

        // liberar o uso dos botoes

        setInteractableButtons(true);
    }

    public void LoadScenePartThree(){
        
        // padrao
        leftButton.GetComponent<Image>().color = Color.white;
        rightButton.GetComponent<Image>().color = Color.white;

        setLifeText();
        TimeController.timeCount = 30;
        
        int randomNumber = sourceImage.pickRandomNumber(8);
        int randomImage = sourceImage.pickRandomNumber(8);
        int randomDecision = sourceImage.pickRandomNumber(8);

            // garante que sao diferentes
        while(randomNumber == randomImage)
        {
            randomImage = sourceImage.pickRandomNumber(8);
        }
        
        // load the clip
        actualAudio = sourceImage.pickStringThree(randomNumber);
        soundSource.clip = Resources.Load<AudioClip>("Audio/Fase1/Parte3/" + actualAudio);

        // load images
        if(randomDecision <=3){
            actualLeftImage = sourceImage.pickStringThree(randomNumber);
            leftImage.sprite = Resources.Load<Sprite>("RepresentacoesGraficas/Fase1/Parte3/" + actualLeftImage);
            actualRightImage = sourceImage.pickStringThree(randomImage);
            rightImage.sprite = Resources.Load<Sprite>("RepresentacoesGraficas/Fase1/Parte3/" + actualRightImage); 
        }else{
            actualRightImage = sourceImage.pickStringThree(randomNumber);
            rightImage.sprite = Resources.Load<Sprite>("RepresentacoesGraficas/Fase1/Parte3/" + actualRightImage); 
            actualLeftImage = sourceImage.pickStringThree(randomImage);
            leftImage.sprite = Resources.Load<Sprite>("RepresentacoesGraficas/Fase1/Parte3/" + actualLeftImage);
        }

        // liberar o uso dos botoes

        setInteractableButtons(true);
    }

    public void PlayThisSound()
    {
        soundSource.Play();
    }

    public void Starter()
    {
        rawImage.enabled = true;
        videoPlayer.enabled = true;
        videoPlayer.Play();
        videoPlayer.loopPointReached += CheckOver_2;
    }

    void CheckOver_2(UnityEngine.Video.VideoPlayer vp)
    {
        Debug.Log("Passou!");
        SceneManager.LoadScene("Two_SC");
        Time.timeScale = 1f;
    }

    public void setLifeText(){
        lifeText.text = lifeController.getLifeCont().ToString(); 
    }

    public void setInteractableButtons(bool e)
    {
        listenButton.interactable = e;
        rightButton.interactable = e;
        leftButton.interactable = e;
    }
}
