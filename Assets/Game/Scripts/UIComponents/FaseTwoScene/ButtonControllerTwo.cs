using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.Video;
using Unity.VisualScripting;

public class ButtonControllerTwo : MonoBehaviour
{
    public Button listenButton;
    public Button firstButton;
    public TextMeshProUGUI firstButtonText;
    public Button secondButton;
    public TextMeshProUGUI secondButtonText;
    public Button thirdButton;
    public TextMeshProUGUI thirdButtonText;
    public Button fourthButton;
    public TextMeshProUGUI fourthButtonText;

    public AudioSource soundSource;
    public Text lifeText;
    public RawImage rawImage;
    public VideoPlayer videoPlayer;

    private LifeController lifeController = new LifeController();
    private SourceImage sourceImage = new SourceImage();
    private static string actualAudio;
    //public static bool managerTimeIsOver = false;
    public static int FaseTwoCount = 0;
    public static int correctButton;
    private static int usedButton = 0;

    private void Start()
    {
        rawImage.enabled = false;
        videoPlayer.enabled = false;
        LoadScenePartOne();
        StartCoroutine(PauseFromLoad());
        PlayThisSound();
        Time.timeScale = 1f;
    }

    private void Update()
    {
        if (lifeController.getStatus() == false)
        {
            StartCoroutine(WaitGameOver());
            lifeController.setStatus(true);
            // game over
        }

        if (FaseTwoCount == 10)
        {
            FaseTwoCount = 0;
            StartCoroutine(WaitWinFaseOne());
        }

        if (TimeController.timeIsOver)
        {
            StartCoroutine(TimeIsOver());
            TimeController.timeIsOver = false;
            //managerTimeIsOver = false;
        }
    }

    public void ClickFirstButton()
    {
        if (lifeController.getStatus())
        {
            usedButton = 0;
            TimeController.controlTimer = false;
            setInteractableButtons(false);
            StartCoroutine(WaitButtonAction());
        }
    }

    public void ClickSecondButton()
    {
        if (lifeController.getStatus())
        {
            usedButton = 1;
            TimeController.controlTimer = false;
            setInteractableButtons(false);
            StartCoroutine(WaitButtonAction());
        }
    }

    public void ClickThirdButton()
    {
        if (lifeController.getStatus())
        {
            usedButton = 2;
            TimeController.controlTimer = false;
            setInteractableButtons(false);
            StartCoroutine(WaitButtonAction());
        }
    }

    public void ClickFourthButton()
    {
        if (lifeController.getStatus())
        {
            usedButton = 3;
            TimeController.controlTimer = false;
            setInteractableButtons(false);
            StartCoroutine(WaitButtonAction());
        }
    }

    IEnumerator WaitButtonAction()
    {

        // aqui pinta e diminui a vida tanto do label de vida, quando do contador.

        switch (usedButton)
        {
            case 0:
                if(usedButton == correctButton)
                {
                    lifeController.IncreaseLife();
                    FaseTwoCount++;
                }
                else
                {
                    lifeController.DecreaseLife();
                }
                break;
            case 1:
                if (usedButton == correctButton)
                {
                    lifeController.IncreaseLife();
                    FaseTwoCount++;
                }
                else
                {
                    lifeController.DecreaseLife();
                }
                break;
            case 2:
                if (usedButton == correctButton)
                {
                    lifeController.IncreaseLife();
                    FaseTwoCount++;
                }
                else
                {
                    lifeController.DecreaseLife();
                }
                break;
            case 3:
                if (usedButton == correctButton)
                {
                    lifeController.IncreaseLife();
                    FaseTwoCount++;
                }
                else
                {
                    lifeController.DecreaseLife();
                }
                break;
        }

        // pintar o botao correto

        switch (correctButton)
        {
            case 0:
                firstButton.GetComponent<Image>().color = Color.green;
                secondButton.GetComponent<Image>().color = Color.red;
                thirdButton.GetComponent<Image>().color = Color.red;
                fourthButton.GetComponent<Image>().color = Color.red;
                break;
            case 1:
                secondButton.GetComponent<Image>().color = Color.green;
                firstButton.GetComponent<Image>().color = Color.red;
                thirdButton.GetComponent<Image>().color = Color.red;
                fourthButton.GetComponent<Image>().color = Color.red;
                break;
            case 2:
                thirdButton.GetComponent<Image>().color = Color.green;
                firstButton.GetComponent<Image>().color = Color.red;
                secondButton.GetComponent<Image>().color = Color.red;
                fourthButton.GetComponent<Image>().color = Color.red;
                break;
            case 3:
                fourthButton.GetComponent<Image>().color = Color.green;
                firstButton.GetComponent<Image>().color = Color.red;
                secondButton.GetComponent<Image>().color = Color.red;
                thirdButton.GetComponent<Image>().color = Color.red;
                break;
        }

        // aqui eh pra carrega a cena novamente 

        if (lifeController.getStatus() && FaseTwoCount != 10)
        {
            Time.timeScale = 1f;
            yield return new WaitForSeconds(2);
            LoadScenePartOne();
            TimeController.controlTimer = true;
            PlayThisSound();

        }
    }

    IEnumerator WaitGameOver()
    {
        yield return new WaitForSeconds(2);
        Time.timeScale = 0f;
        SceneManager.LoadScene("GameOver");
    }

    IEnumerator WaitWinFaseOne()
    {
        yield return new WaitForSeconds(2);
        Time.timeScale = 0f;
        GameController.coins = 0;

        PlayerController.faseController = "two";

        Starter();
    }

    IEnumerator TimeIsOver()
    {
        lifeController.DecreaseLife();
        Time.timeScale = 1f;
        yield return new WaitForSeconds(2);

        LoadScenePartOne();
        PlayThisSound();
        TimeController.controlTimer = true;
    }

    IEnumerator PauseFromLoad()
    {
        setInteractableButtons(false);


        yield return new WaitForSeconds(1);

        setInteractableButtons(true);
    }

    public void LoadScenePartOne()
    {  

        // setar cores dos botoes/vida/contador 

        firstButton.GetComponent<Image>().color = Color.white;
        secondButton.GetComponent<Image>().color = Color.white;
        thirdButton.GetComponent<Image>().color = Color.white;
        fourthButton.GetComponent<Image>().color = Color.white;

        setLifeText();
        TimeController.timeCount = 30;

        // load clip

        int randomNumber = sourceImage.pickRandomNumber(5);     //pegar vogal
        int randomDecision = sourceImage.pickRandomNumber(4);   // pegar botao
        correctButton = randomDecision;

        actualAudio = sourceImage.pickStringFaseTwo(randomNumber); // pegou uma das vogais

        if(actualAudio == "o")
        {
            soundSource.clip = Resources.Load<AudioClip>("Audio/Fase2/Vogais/" + "�");
        }
        else if(actualAudio == "e")
        {
            soundSource.clip = Resources.Load<AudioClip>("Audio/Fase2/Vogais/" + "�");
        }
        else
        {
            soundSource.clip = Resources.Load<AudioClip>("Audio/Fase2/Vogais/" + actualAudio); // pegou o audio 
        }

        // carrega o botao decidido logo

        switch (randomDecision)
        {
            case 0:
                firstButtonText.text = actualAudio.ToUpper();
                break;
            case 1:
                secondButtonText.text = actualAudio.ToUpper();
                break;
            case 2:
                thirdButtonText.text = actualAudio.ToUpper();
                break;
            case 3:
                fourthButtonText.text = actualAudio.ToUpper();
                break;
        }

        // agora carrega os outros botoes

        // criar vetor com botoes que nao foram usados
        int[] NonUsedButtons = { 0, 0, 0 };
        int n = 0;

        for(int i=0; i<4; i++)
        {
            if (i == randomDecision)
            {
                n--;
            }
            else
            {
                NonUsedButtons[n] = i;
            }
            n++;
        }

        // agora pegar 3 letras diferentes sendo que ja temos a atual 
        // ela ta na variavel randomNumber

        int[] NVs = { randomNumber, 0, 0, 0 };
        bool manager = true;
        bool first = true;
        bool second = false;
        bool third = false;
      
        while (manager)
        {
            int randomNumberVogals = sourceImage.pickRandomNumber(5);


            if (randomNumberVogals != NVs[0] && first)
            {
                NVs[1] = randomNumberVogals;
                first = false;
                second = true;
            }

            if((randomNumberVogals != NVs[0]) && (randomNumberVogals != NVs[1]) && second)
            {
                NVs[2] = randomNumberVogals;
                second = false;
                third = true;
            }

            if ((randomNumberVogals != NVs[0]) && (randomNumberVogals != NVs[1]) && (randomNumberVogals != NVs[2]) && third)
            {
                NVs[3] = randomNumberVogals;
                third = false;
                manager = false;
            }
        }
  
        // agora vou colocar os valores nos botoes

        for(int i=0; i < 3; i++)
        {
            //string Vogals = sourceImage.pickStringFaseTwo(NVs[i + 1]);

            switch (NonUsedButtons[i])
            {
                case 0:
                    firstButtonText.text = sourceImage.pickStringFaseTwo(NVs[i + 1]).ToUpper();
                    break;
                case 1:
                    secondButtonText.text = sourceImage.pickStringFaseTwo(NVs[i + 1]).ToUpper() ;
                    break;
                case 2:
                    thirdButtonText.text = sourceImage.pickStringFaseTwo(NVs[i + 1]).ToUpper();

                    break;
                case 3:
                    fourthButtonText.text = sourceImage.pickStringFaseTwo(NVs[i + 1]).ToUpper();
                    break;
            }
        }

        // o textos foram aplicados 

        setInteractableButtons(true);
    }

    public void PlayThisSound()
    {
        soundSource.Play();
    }
    public void Starter()
    {
        //rawImage.enabled = true;
        //videoPlayer.enabled = true;
        //videoPlayer.Play();
        //videoPlayer.loopPointReached += CheckOver;
        SceneManager.LoadScene("Cutscene1");
        Time.timeScale = 1f;
    }

    void CheckOver(UnityEngine.Video.VideoPlayer vp)
    {
        SceneManager.LoadScene("Two_SC");
        Time.timeScale = 1f;
    }

    public void setLifeText()
    {
        lifeText.text = lifeController.getLifeCont().ToString();
    }

    public void setInteractableButtons(bool e)
    {
        listenButton.interactable = e;
        firstButton.interactable = e;
        secondButton.interactable = e;
        thirdButton.interactable = e;
        fourthButton.interactable = e;
    }

}
