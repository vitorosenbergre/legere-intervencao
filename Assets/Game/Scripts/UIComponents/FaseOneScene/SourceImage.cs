using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class SourceImage
{
   
    // FaseOne
    private string [] imageAudio = {"Su40_Su80","So40_So80"};
    private string [] imageAudio2 = {"So40_So80_So60","So80_So40_So60","Su40_Su80_Su60","Su80_Su40_Su60"};
    private string [] imageAudio3 = {"So40_Su40_So60","So40_Su40_So80","So40_Su60_So80","So60_Su40_So80","Su40_So40_Su60","Su40_So40_Su80","Su40_So60_Su80","Su60_So40_Su80"};

    // FaseTwo
    private string[] FaseTwoAudio = {"a","e","i","o","u"};
   
    // FaseThree
    private string[] FaseThreeAudio = {"al","am","an","ar","as","be","bi","bo","bu","b�","ca","ce","ci","cu","da","di","do","em","en","er","es","fa","fe","fi","fo","fu","ga","ge","gi","go","gu","im","in","ir","is","jan","je","ji","jo","ju","la","le","li","lo","ma","me","mi","mo","mu","na","ne","ni","no","nu","om","on","or","os","pa","pe","pi","pi","pu","ra","re","ri","ro","se","te","to","ze","zo","��o","��es"};

    // FaseFour
    private string[] FaseFourAudio = {"amarelo","apito","bala","banana","batata","biruta","boca","bola","bolita","bolo","boneca","bonito","bon�","boto","bula","bule","cabelo","caf�","cama","camelo","camisa","capacete","casa","casaco","cavalo","cereja","cola","copo","coruja","dado","dedo","duro","escola","escova","faca","fada","foca","fogo","galo","gato","gelado","gelo","jaca","jacar�","janela","lata","leite","lixo","lua","luta","luva","macaco","mala","menino","mesa","moeda","m�sica","neve","novela","ovo","parede","pato","pelado","pena","pera","peteca","piano","pipa","pipoca","pirulito","pulo","p�","rato","rei","rico","rob�","roda","rosa","rua","sapato","sapo","sino","sof�","suco","s�bado","tapete","tatu","telefone","teto","tijolo","tomate","urso","uva","vaca","vagalume","vela","xixi","x�cara","�rvore"};

    // FaseFive
    private string[] FaseFiveAudio = {"bal","bam","ban","bar","bas","bel","bem","ber","bes","bil","bin","bir","bis","bol","bom","bor","bos","bum","bur","bus","b�o","cal","cam","can","car","cas","cel","cen","cer","ces","che","cin","cir","cis","col","com","cor","cos","cul","cum","cur","cus","cuz","c�es","dan","dar","das","den","der","des","dim","dis","don","dor","dos","dum","d�o","fal","fan","far","fel","fen","fer","fes","fil","fim","fir","fol","fon","for","fos","fun","gal","gam","gan","gar","gel","gem","gen","ger","gil","gin","gir","gol","gon","gor","gua","g�o","jan","jar","jas","jor","jun","jus","j�o","lam","lan","lar","las","lem","len","ler","lim","lin","lom","los","lus","luz","l�o","mal","man","mar","mas","me","mel","men","mer","mes","min","mir","mis","mol","mon","mor","mos","mu","mun","mus","m�o","m�os","nal","nao","nas","nel","ner","nil","nir","nos","paes","pan","pao","par","pas","pau","paz","pen","per","pes","peu","pi","pin","pis","po","pol","pon","por","pos","pu","pun","ram","ran","ras","ren","rer","res","reu","ril","rim","rin","rio","rir","ris","rol","rom","ron","ros","sal","sam","san","sao","sar","sel","sem","sen","ser","sim","sis","sol","som","son","soon","sor","sur","sus","tal","tam","tan","tao","tar","tas","tel","tem","ten","ter","tes","tim","tin","tio","tir","tol","tom","ton","tor","tum","tur","val","van","vao","var","vas","vel","vem","ven","ver","vez","vim","vir","vis","vom","von","xan","xao","xar","xer","xis","zal","zao","zar","zer","zim","zis","zol","zon","zum","zun","��o","��es"};

    // FaseSix
    private string[] FaseSixAudio = {"ble","bli","blo","blu","bra","bre","bri","bro","bru","cla","cle","cli","clo","clu","cra","cre","cri","cro","cru","dra","dre","dri","dro","dru","fla","fle","flo","flu","fra","fre","fri","fro","fru","gla","glo","gra","gre","gri","gro","gru","pla","plo","plu","pra","pre","pri","pro","pru","tle","tlu","tra","tre","tri","tro","tru","ver","vre","vri","vru"};

    // FaseSeven
    private string[] FaseSevenAudio = {"bran","bras","bres","brin","bron","bros","brus","chao","clas","clos","cres","cris","cros","crus","guam","guar","lheu","plas","plis","pran","pras","pren","pres","prin","pron","tlas","tras","tres","tris","tros"};

    //FaseEight
    private string[] FaseEightAudio = {"abelha","aberto","alegria","animal","antena","apontador","aranha","arroz","azul","banha","barco","batom","biblioteca","bicicleta","biscoito","bloco","blusa","bolha","borboleta","bra�o","Brasil","brinco","brinquedo","bronca","bruxa","B�blia","cachorro","caderno","cal�a","carro","carro�a","cenoura","chinelo","chocolate","cobertor","cobra","computador","engra�ado","espinho","farol","fechado","ficha","filho","flauta","flor","floresta","foguete","folha","fralda","fruta","galinha","girassol","gravata","graveto","guitarra","impressora","jardim","jegue","joelho","l�mpada","laranja","le�o","lim�o","l�ngua","linha","livro","malvado","mam�o","maravilha","minhoca","mochila","nariz","ninho","noivo","nublado","olho","palha�o","passagem","passarinho","peixe","pilha","pinguim","placa","planta","pra�a","prato","princesa","pr�ncipe","pulseira","r�gua","retrato","segredo","sol","sonho","tartaruga","telefone","terra","tigre","tornozelo","vidro"};

    public string pickString(int number)
    {
        return imageAudio[number];
    }

    public string pickStringTwo(int number){
        return imageAudio2[number];
    }

    public string pickStringThree(int number){
        return imageAudio3[number];
    }

    // two
    public string pickStringFaseTwo(int number)
    {
        return FaseTwoAudio[number];
    }
    
    // three
    public string pickStringFaseThree(int number)
    {
        return FaseThreeAudio[number];
    }

    // four
    public string pickStringFaseFour(int number)
    {
        return FaseFourAudio[number];
    }

    //five
    public string pickStringFaseFive(int number)
    {
        return FaseFiveAudio[number];
    }

    //six
    public string pickStringFaseSix(int number)
    {
        return FaseSixAudio[number];
    }

    //seven
    public string pickStringFaseSeven(int number)
    {
        return FaseSevenAudio[number];
    }

    public string pickStringFaseEight(int number)
    {
        return FaseEightAudio[number];
    }

    public int pickRandomNumber(int lenght)
    {
        System.Random rnd = new System.Random();
        return rnd.Next(lenght);
    }

}
