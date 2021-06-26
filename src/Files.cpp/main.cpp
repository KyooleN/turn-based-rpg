#include <iostream>
#include "../Files.h/classes.h"
using namespace std;

int validaClasse(int resposta) {
    if(resposta < 0 || resposta > 2) {
       cout<<"\nOpcao invalida. Escolha uma classe existente!\n";
        return 1;
    } else if (resposta == 0) {
        return 0;
    } else {
        return 2;
    }
     
}

int validaHumano(int resposta) {
    if(resposta < 0 || resposta > 4) {
        cout << "\nOpcao invalida. Escolha um personagem existente!\n";
        return 1;
    } else {
        return 0;
    }
}

int validaInumano(int resposta) {
    if((resposta < 5 || resposta > 8) && resposta != 0) {
        cout << "\nOpcao invalida. Escolha um personagem existente!\n";
        return 1;
    } else {
        return 0;
    }
}

void exibeHumanos() {
    cout << "\nClasse de Humanos selecionada.\nEscolha seu Personagem!\n\n1 - Guerreiro\n2 - Ladrao\n3 - Mago\n4 - Paladino\n\n0 - Voltar\n\n>> ";
}

void exibeInumanos() {
    cout << "\nClasse de Inumanos selecionada.\nEscolha seu Personagem!\n\n5 - Animal\n6 - Troll\n7 - Dragao\n8 - Zumbi\n\n0 - Voltar\n\n>> ";

}

void exibeSkillsPlayer1 (int optPlayer1) {

    cout << "\n\nPlayer 1, seu turno!\n\n";

    if(optPlayer1 == 1) { //guerreiro
        cout << "1 - Ataque Fisico\n2 - Trocar a arma\n9 - Tempestade\n\n>>  ";
    } else if (optPlayer1 == 2) { //Ladrão
        cout << "1 - Ataque Fisico\n2 - Trocar a arma\n8 - Intoxicacao\n9 - Tempestade\n\n>>  ";
    } else if (optPlayer1 == 3) {//mago
        cout << "1 - Ataque Fisico\n2 - Trocar a arma\n3 - Pocao de vida\n5 - Bio\n6 - Cura\n7 - Flama Gelada\n8 - Intoxicacao\n9 - Tempestade\n\n>>  ";
    } else if (optPlayer1 == 4) {//paladino
        cout << "1 - Ataque Fisico\n2 - Trocar a arma\n5 - Bio\n7 - Flama Gelada\n9 - Tempestade\n\n>>  ";
    } else if (optPlayer1 == 5) {//animal
        cout << "1 - Ataque Fisico\n2 - Trocar a arma\n5 - Bio\n>>  ";
    } else if (optPlayer1 == 6) {//troll
        cout << "1 - Ataque Fisico\n2 - Trocar a arma\n8 - Intoxicacao\n\n>>  ";
    } else if (optPlayer1 == 7) {//dragao
        cout << "1 - Ataque Fisico\n2 - Trocar a arma\n4 - Halito de fogo\n\n>>  ";
    } else if (optPlayer1 == 8) {//zumbi
        cout << "1 - Ataque Fisico\n2 - Trocar a arma\n8 - Intoxicacao\n\n>>  ";
    }
}

void exibeSkillsPlayer2 (int optPlayer2) {

    cout << "\n\nPlayer 2, seu turno!\n\n";

    if(optPlayer2 == 1) { //guerreiro
        cout << "1 - Ataque Fisico\n2 - Trocar a arma\n9 - Tempestade\n\n>>  ";
    } else if (optPlayer2 == 2) { //Ladrão
        cout << "1 - Ataque Fisico\n2 - Trocar a arma\n8 - Intoxicacao\n9 - Tempestade\n\n>>  ";
    } else if (optPlayer2 == 3) {//mago
        cout << "1 - Ataque Fisico\n2 - Trocar a arma\n3 - Pocao de vida\n5 - Bio\n6 - Cura\n7 - Flama Gelada\n8 - Intoxicacao\n9 - Tempestade\n\n>>  ";
    } else if (optPlayer2 == 4) {//paladino
        cout << "1 - Ataque Fisico\n2 - Trocar a arma\n5 - Bio\n7 - Flama Gelada\n9 - Tempestade\n\n>>  ";
    } else if (optPlayer2 == 5) {//animal
        cout << "1 - Ataque Fisico\n2 - Trocar a arma\n5 - Bio\n\n>>  ";
    } else if (optPlayer2 == 6) {//troll
        cout << "1 - Ataque Fisico\n2 - Trocar a arma\n8 - Intoxicacao\n\n>>  ";
    } else if (optPlayer2 == 7) {//dragao
        cout << "1 - Ataque Fisico\n2 - Trocar a arma\n4 - Halito de fogo\n\n>>  ";
    } else if (optPlayer2 == 8) {//zumbi
        cout << "1 - Ataque Fisico\n2 - Trocar a arma\n8 - Intoxicacao\n\n>>  ";
    }
}

int validaAcaoPlayer1 (int optPlayer1) {
    
    int acao, flag;

    do {
        cin >> acao;
        flag = 0;

        if( (optPlayer1 == 1 && acao != 1 && acao != 2 && acao != 9) || //guerreiro
        (optPlayer1 == 2 && acao != 1 && acao != 2 && acao != 8 && acao != 9) || //ladrao
        (optPlayer1 == 3 && acao != 1 && acao != 2 && acao != 3 && acao != 5 && acao != 6 && acao != 7 && acao != 8 && acao != 9) || //mago 
        (optPlayer1 == 4 && acao != 1 && acao != 2 && acao != 5 && acao != 7 && acao != 9) || //paladino
        (optPlayer1 == 5 && acao != 1 && acao != 2 && acao != 5) || //animal
        (optPlayer1 == 6 && acao != 1 && acao != 2 && acao != 8) || //troll
        (optPlayer1 == 7 && acao != 1 && acao != 2 && acao != 4) || //dragao
        (optPlayer1 == 8 && acao != 1 && acao != 2 && acao != 8) //zumbi 
        )   {
            cout << "\nAcao invalida! Voce nao tem essa habilidade!\n";
            flag = 1;
            exibeSkillsPlayer1(optPlayer1);
        } 

    } while (flag != 0);

    return acao;
        
}

int validaAcaoPlayer2 (int optPlayer2) {
    
    int acao, flag;

    do {
        cin >> acao;
        flag = 0;

        if( (optPlayer2 == 1 && acao != 1 && acao != 2 && acao != 9) || //guerreiro
        (optPlayer2 == 2 && acao != 1 && acao != 2 && acao != 8 && acao != 9) || //ladrao
        (optPlayer2 == 3 && acao != 1 && acao != 2 && acao != 3 && acao != 5 && acao != 6 && acao != 7 && acao != 8 && acao != 9) || //mago 
        (optPlayer2 == 4 && acao != 1 && acao != 2 && acao != 5 && acao != 7 && acao != 9) || //paladino
        (optPlayer2 == 5 && acao != 1 && acao != 2 && acao != 5) || //animal
        (optPlayer2 == 6 && acao != 1 && acao != 2 && acao != 8) || //troll
        (optPlayer2 == 7 && acao != 1 && acao != 2 && acao != 4) || //dragao
        (optPlayer2 == 8 && acao != 1 && acao != 2 && acao != 8) //zumbi 
        )   {
            cout << "\nAcao invalida! Voce nao tem essa habilidade!\n";
            flag = 1;
            exibeSkillsPlayer2(optPlayer2);
        } 

    } while (flag != 0);

    return acao;
        
}

void exibeArmasPlayer1 (int optPlayer1) {

    if(optPlayer1 == 1) { //guerreiro
        cout << "3 - Espada Barroca (300 - 500)\n4 - Porrete (180 - 380)\n\n>>  ";
    } else if (optPlayer1 == 2) { //Ladrão
        cout << "6 - Besta (220 - 420)\n7 - Esfera de ataque(200 - 400)\n\n>>  ";
    } else if (optPlayer1 == 3) {//mago
        cout << "2 - Tridente Sagrado (230 - 430)\n5 - Cajado (50 - 200)\n\n>>  ";
    } else if (optPlayer1 == 4) {//paladino
        cout << "2 - Tridente Sagrado (230 - 430)\n6 - Besta (220 - 420)\n\n>>  ";
    } else if (optPlayer1 == 5) {//animal
        cout << "1 - Garra Letal (100 - 300)\n3 - Espada Barroca (300 - 500)\n\n>>  ";
    } else if (optPlayer1 == 6) {//troll
        cout << "4 - Porrete (180 - 380)\n5 - Cajado (50 - 200)\n\n>>  ";
    } else if (optPlayer1 == 7) {//dragao
        cout << "1 - Garra Letal (100 - 300)\n3 - Mordida (300 - 500)\n\n>>  ";
    } else if (optPlayer1 == 8) {//zumbi
        cout << "1 - Garra Letal (100 - 300)\n4 - Porrete (180 - 380)\n\n>>  ";
    }
}

void exibeArmasPlayer2 (int optPlayer2) {

    if(optPlayer2 == 1) { //guerreiro
        cout << "3 - Espada Barroca (300 - 500)\n4 - Porrete (180 - 380)\n\n>>  ";
    } else if (optPlayer2 == 2) { //Ladrão
        cout << "6 - Besta (220 - 420)\n7 - Esfera de ataque(200 - 400)\n\n>>  ";
    } else if (optPlayer2 == 3) {//mago
        cout << "2 - Tridente Sagrado (230 - 430)\n5 - Cajado (50 - 200)\n\n>>  ";
    } else if (optPlayer2 == 4) {//paladino
        cout << "2 - Tridente Sagrado (230 - 430)\n6 - Besta (220 - 420)\n\n>>  ";
    } else if (optPlayer2 == 5) {//animal
        cout << "1 - Garra Letal (100 - 300)\n3 - Espada Barroca (300 - 500)\n\n>>  ";
    } else if (optPlayer2 == 6) {//troll
        cout << "4 - Porrete (180 - 380)\n5 - Cajado (50 - 200)\n\n>>  ";
    } else if (optPlayer2 == 7) {//dragao
        cout << "1 - Garra Letal (100 - 300)\n3 - Mordida (300 - 500)\n\n>>  ";
    } else if (optPlayer2 == 8) {//zumbi
        cout << "1 - Garra Letal (100 - 300)\n4 - Porrete (180 - 380)\n\n>>  ";
    }
}

int trocArmaPlayer1 (int optPlayer1, int danos[]) {
    
    int acao, flag;

    do {
        cin >> acao;
        flag = 0;

        if( (optPlayer1 == 1 && acao != 3 && acao != 4 ) || //guerreiro
        (optPlayer1 == 2 && acao != 6 && acao != 7 ) || //ladrao
        (optPlayer1 == 3 && acao != 2 && acao != 5 ) || //mago 
        (optPlayer1 == 4 && acao != 2 && acao != 6 ) || //paladino
        (optPlayer1 == 5 && acao != 1 && acao != 3 ) || //animal
        (optPlayer1 == 6 && acao != 4 && acao != 5 ) || //troll
        (optPlayer1 == 7 && acao != 1 && acao != 3 ) || //dragao
        (optPlayer1 == 8 && acao != 1 && acao != 4 ) //zumbi 
        )   {
            cout << "\nAcao invalida! Voce nao tem essa habilidade!\n";
            flag = 1;
            exibeSkillsPlayer1(optPlayer1);
        } 

    } while (flag != 0);

    if (acao == 1){
        danos[0] = 100, danos[1] = 300;
    } else if(acao == 2){
        danos[0] = 230, danos[1] = 430;
    } else if(acao == 3){
        danos[0] = 300, danos[1] = 500;
    } else if(acao == 4){
        danos[0] = 180, danos[1] = 380;
    } else if(acao == 5){
        danos[0] = 50, danos[1] = 200;
    } else if(acao == 6){
        danos[0] = 200, danos[1] = 420;
    } else if(acao == 7){
        danos[0] = 200, danos[1] = 400;
    }   
        
}

int trocArmaPlayer2 (int optPlayer2, int danos[]) {
    
    int acao, flag;

    do {
        cin >> acao;
        flag = 0;

        if( (optPlayer2 == 1 && acao != 3 && acao != 4 ) || //guerreiro
        (optPlayer2 == 2 && acao != 6 && acao != 7 ) || //ladrao
        (optPlayer2 == 3 && acao != 2 && acao != 5 ) || //mago 
        (optPlayer2 == 4 && acao != 2 && acao != 6 ) || //paladino
        (optPlayer2 == 5 && acao != 1 && acao != 3 ) || //animal
        (optPlayer2 == 6 && acao != 4 && acao != 5 ) || //troll
        (optPlayer2 == 7 && acao != 1 && acao != 3 ) || //dragao
        (optPlayer2 == 8 && acao != 1 && acao != 4 ) //zumbi 
        )   {
            cout << "\nAcao invalida! Voce nao tem essa habilidade!\n";
            flag = 1;
            exibeSkillsPlayer1(optPlayer2);
        } 

    } while (flag != 0);

    if (acao == 1){
        danos[0] = 100, danos[1] = 300;
    } else if(acao == 2){
        danos[0] = 230, danos[1] = 430;
    } else if(acao == 3){
        danos[0] = 300, danos[1] = 500;
    } else if(acao == 4){
        danos[0] = 180, danos[1] = 380;
    } else if(acao == 5){
        danos[0] = 50, danos[1] = 200;
    } else if(acao == 6){
        danos[0] = 200, danos[1] = 420;
    } else if(acao == 7){
        danos[0] = 200, danos[1] = 400;
    }   
        
}



int main()
{
    int optPlayer1, optPlayer2, flag, vencedor;
    int armaPlayer1[2], armaPlayer2[2];
    Player *player1;
    Player *player2;

    cout << "\n\nFala galera! Sejam bem-vindos ao KrystalZeep!\nBora pro fight?\nPlayer 1, escolha sua classe:\n";
    //inicio perguntas player 1
    do{
        do {
            cout <<"\n\n1 - Classe de Humanos \t 2 - Classe de Inumanos \n\n \t\t 0 - Sair\n\n>> ";
            cin >>  optPlayer1;

            flag = validaClasse(optPlayer1);

            if(flag == 0) {
                return 0; //sair
            }

        } while(flag != 2);

        if(optPlayer1 == 1) {
            do {
                exibeHumanos();
                cin >>  optPlayer1;
                flag = validaHumano(optPlayer1);

            } while(flag != 0);
        } else {
            
                exibeInumanos();
                cin >> optPlayer1;
                validaInumano(optPlayer1);
                
           
            
        }

    } while(optPlayer1 == 0); 
    //fim perguntas player 1

    cout << "\n\nAgora e a sua vez Player 2, escolha sua classe!\n\n";
    //inicio perguntas player 2
    do{
        do {
            cout <<"\n\n1 - Classe de Humanos \t 2 - Classe de Inumanos \n\n \t\t 0 - Sair\n\n>> ";
            cin >>  optPlayer2;

            flag = validaClasse(optPlayer2);

            if(flag == 0) {
                return 0; //sair
            }

        } while(flag != 2);

        if(optPlayer2 == 1) {
            do {
                exibeHumanos();
                cin >>  optPlayer2;
                flag = validaHumano(optPlayer2);

            } while(flag != 0);
        } else {
            do {
                exibeInumanos();
                cin >> optPlayer2;
                flag = validaInumano(optPlayer2);
                
            } while (flag != 0);
            
        }

    } while(optPlayer2 == 0); 
    //fim perguntas player 2

    //Atualizando as escolhas dos jogadores



    //Player 1
    //Humanos:

    if (optPlayer1 == 1) { //guerreiro
       player1 = new Player (4000, 30, 20, 100, 80, 20, 20);
       armaPlayer1[0] = 180, armaPlayer1[1] = 380;

    } else if (optPlayer1 == 2) { //ladrao
        player1 = new Player (2800, 50, 30, 30, 40, 50, 80);
        armaPlayer1[0] = 200, armaPlayer1[1] = 400;
   
    } else if (optPlayer1 == 3) { //mago
        player1 = new Player (2500, 100, 100, 40, 30, 80, 60);
        armaPlayer1[0] = 50, armaPlayer1[1] = 200;
  
    } else if (optPlayer1 == 4) { //paladino
        player1 = new Player (3200, 80, 50, 60, 60, 60, 60);
        armaPlayer1[0] = 220, armaPlayer1[1] = 420;
    }    

    //Inumanos:

    if (optPlayer1 == 5) { //Animal
       player1 = new Player (3200, 30, 20, 80, 80, 20, 50);
       armaPlayer1[0] = 100, armaPlayer1[1] = 300;
    } else if (optPlayer1 == 6) { // Troll
        player1 = new Player (2800, 20, 20, 100, 80, 20, 20);
        armaPlayer1[0] = 50, armaPlayer1[1] = 200;
   
    } else if (optPlayer1 == 7) {//Dragão
        player1 = new Player(3000, 40, 20, 100, 50, 50, 30);
        armaPlayer1[0] = 100, armaPlayer1[1] = 300;
  
    } else if (optPlayer1 == 8) {//Zumbi
        player1 = new Player (2500, 20, 20, 40, 40, 80, 50);
        armaPlayer1[0] = 100, armaPlayer1[1] = 300;
    }
   

    //Player 2
    //Humanos:

    if (optPlayer2 == 1) {//Guerreiro
       player2 = new Player (4000, 30, 20, 100, 80, 20, 20);
       armaPlayer2[0] = 180, armaPlayer2[1] = 380;

    } else if (optPlayer2 == 2) { //Ladrão
        player2 = new Player (2800, 50, 30, 30, 40, 50, 80);
        armaPlayer2[0] = 200, armaPlayer2[1] = 400;
   
    } else if (optPlayer2 == 3) { //Mago
        player2 = new Player (2500, 100, 100, 40, 30, 80, 60);
        armaPlayer2[0] = 50, armaPlayer2[1] = 200;
  
    } else if (optPlayer2 == 4) { //Paladino
        player2 = new Player (3200, 80, 50, 60, 60, 60, 60);
        armaPlayer2[0] = 220, armaPlayer2[1] = 420;
    } 
    
    //Inumanos:
    
    if (optPlayer2 == 5) { //Animal
        player2 = new Player(3200, 30, 20, 80, 80, 20, 50);
        armaPlayer2[0] = 100, armaPlayer2[1] = 300;

    } else if (optPlayer2 == 6) {//Troll
        player2 = new Player(2800, 20, 20, 100, 80, 20, 20);
        armaPlayer2[0] = 50, armaPlayer2[1] = 200;
   
    } else if (optPlayer2 == 7) {//Dragão
        player2 = new Player(3000, 40, 20, 100, 50, 50, 30);
        armaPlayer2[0] = 100, armaPlayer2[1] = 300;
        
  
    } else if (optPlayer2 == 8) {//Zumbi
        player2 = new Player (2500, 20, 20, 40, 40, 80, 50);
        armaPlayer2[0] = 100, armaPlayer2[1] = 300;        
    }      
    
    cout << "\n\n\n \t\t\t\t\t FIGHT!\n\n\n\n";

    int vidaPlayer1;
    int vidaPlayer2;

    //Jogo começou

    do {
        int dano, esquiva = 0;
        player1->imprimeStatus();
        cout << "Arma jogador 1: " << armaPlayer1[0] << "-" << armaPlayer1[1] << "\n";
        player2->imprimeStatus();
        cout << "Arma jogador 2: " << armaPlayer2[0] << "-" << armaPlayer2[1] << "\n";
        exibeSkillsPlayer1(optPlayer1);
        int escolhaPlayer1 =  validaAcaoPlayer1(optPlayer1);

       if (escolhaPlayer1 == 1){
           dano = player1-> executaDanoFisico(armaPlayer1[0], armaPlayer1[1]);
           esquiva = player1->chanceEsquiva();
       }else if (escolhaPlayer1 == 2){
           exibeArmasPlayer1(optPlayer1);
           trocArmaPlayer1(optPlayer1, armaPlayer1); //Altera os valores do dano
       }else if(escolhaPlayer1 == 3) {
            player1->executaDanoMagico(-200, 12); 
       } else if (escolhaPlayer1 == 4) {
           dano = player1->executaDanoMagico(400, 12);
           esquiva = player1->chanceEsquiva();
       } else if (escolhaPlayer1 == 5) {
           dano = player1->executaDanoMagico(360, 14);
           esquiva = player1->chanceEsquiva();
       } else if (escolhaPlayer1 == 6) {
            player1->executaDanoMagico(-400, 16);
       } else if (escolhaPlayer1 == 7) {
           dano = player1->executaDanoMagico(320, 14);
           esquiva = player1->chanceEsquiva();
       } else if (escolhaPlayer1 == 8) {
           dano = player1->executaDanoMagico(280, 12);
           esquiva = player1->chanceEsquiva();
       } else if (escolhaPlayer1 == 9) {
           dano = player1->executaDanoMagico(200, 12);
           esquiva = player1->chanceEsquiva();
       }
       
       

       if(esquiva != 1) { //caso nao tenha escapado
        if (escolhaPlayer1 == 1){
            player2->recebeDanoFisico(dano);
        }else if (escolhaPlayer1 != 2 && escolhaPlayer1 != 3 && escolhaPlayer1 != 6){
            player2->recebeDanoMagia(dano);
        }               
       }

        player1->imprimeStatus();
        cout << "Arma jogador 1: " << armaPlayer1[0] << "-" << armaPlayer1[1] << "\n";
        player2->imprimeStatus();
        cout << "Arma jogador 2: " << armaPlayer2[0] << "-" << armaPlayer2[1] << "\n";

        vidaPlayer2 = player2->exibeHP();

       if(vidaPlayer2 <= 0) {
           vencedor = 1;
           break;
       }

       

       exibeSkillsPlayer2(optPlayer2);
       int escolhaPlayer2 = validaAcaoPlayer2(optPlayer2);
        

    
       if (escolhaPlayer2 == 1){
           dano = player2-> executaDanoFisico(armaPlayer2[0], armaPlayer2[1]);
           esquiva = player2->chanceEsquiva();
       }else if (escolhaPlayer2 == 2){
           exibeArmasPlayer1(optPlayer2);
           trocArmaPlayer2(optPlayer2, armaPlayer2); //Altera os valores do dano
       }else if(escolhaPlayer2 == 3) {
            player2->executaDanoMagico(-200, 12); 
       } else if (escolhaPlayer2 == 4) {
           dano = player2->executaDanoMagico(400, 12);
           esquiva = player2->chanceEsquiva();
       } else if (escolhaPlayer2 == 5) {
           dano = player2->executaDanoMagico(360, 14);
           esquiva = player2->chanceEsquiva();
       } else if (escolhaPlayer2 == 6) {
            player2->executaDanoMagico(-400, 16);
       } else if (escolhaPlayer2 == 7) {
           dano = player2->executaDanoMagico(320, 14);
           esquiva = player2->chanceEsquiva();
       } else if (escolhaPlayer2 == 8) {
           dano = player2->executaDanoMagico(280, 12);
           esquiva = player2->chanceEsquiva();
       } else if (escolhaPlayer2 == 9) {
           dano = player2->executaDanoMagico(200, 12);
           esquiva = player2->chanceEsquiva();
       }
    

       if(esquiva != 1) { //caso nao tenha escapado
        if (escolhaPlayer2 == 1){
            player1->recebeDanoFisico(dano);
        }else if (escolhaPlayer2 != 2 && escolhaPlayer2 != 3 && escolhaPlayer2 != 6){
            player1->recebeDanoMagia(dano);
        }               
       }

        vidaPlayer1 = player1->exibeHP();

       if(vidaPlayer1 <= 0) {
           vencedor = 2;
           break;
       }

    } while (vidaPlayer1 > 0 && vidaPlayer2 > 0);
}




