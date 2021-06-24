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
    if(resposta < 5 || resposta > 8 && resposta != 0) {
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





int main()
{
    int optPlayer1, optPlayer2, flag;
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
            do {
                exibeInumanos();
                cin >> optPlayer1;
                flag = validaInumano(optPlayer1);
                
            } while (flag != 0);
            
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
    //Atualiza aqui com suas classes e numeros tiago

    //Humanos:

    if (optPlayer1 == 1) {
       player1 = new Guerreiro (4000, 30, 20, 100, 80, 20, 20);
       cout << "\nStats Player 1: ";
       player1->imprimeStatus();

    } else if (optPlayer1 == 2) {
        player1 = new Ladrao (2800, 50, 30, 30, 40, 50, 80);
        cout << "\nStats Player 1: ";
        player1->imprimeStatus();
   
    } else if (optPlayer1 == 3) {
        player1 = new Mago (2500, 100, 100, 40, 30, 80, 60);
        cout << "\nStats Player 1: ";
        player1->imprimeStatus();
  
    } else if (optPlayer1 == 4) {
        player1 = new Paladino (3200, 80, 50, 60, 60, 60, 60);
        cout << "\nStats Player 1: ";
        player1->imprimeStatus();
    }    

    //Inumanos:

    if (optPlayer1 == 5) {
       player1 = new Animal (3200, 30, 20, 80, 80, 20, 50);
       cout << "\nStats Player 1: ";
       player1->imprimeStatus();

    } else if (optPlayer1 == 6) {
        player1 = new Troll (2800, 20, 20, 100, 80, 20, 20);
        cout << "\nStats Player 1: ";
        player1->imprimeStatus();
   
    } else if (optPlayer1 == 7) {
        player1 = new Dragao(3000, 40, 20, 100, 50, 50, 30);
        cout << "\nStats Player 1: ";
        player1->imprimeStatus();
  
    } else if (optPlayer1 == 8) {
        player1 = new Zumbi (2500, 20, 20, 40, 40, 80, 50);
        cout << "\nStats Player 1: ";
        player1->imprimeStatus();
    }
   

    //Player 2
    //mesmo esquema aqui tiago
    //cout << player2->exibeHP();

    //Humanos:

    if (optPlayer2 == 1) {
       player2 = new Guerreiro (4000, 30, 20, 100, 80, 20, 20);
       cout << "\nStats Player 1: ";
       player2->imprimeStatus();

    } else if (optPlayer2 == 2) {
        player2 = new Ladrao (2800, 50, 30, 30, 40, 50, 80);
        cout << "\nStats Player 1: ";
        player2->imprimeStatus();
   
    } else if (optPlayer2 == 3) {
        player2 = new Mago (2500, 100, 100, 40, 30, 80, 60);
        cout << "\nStats Player 1: ";
        player2->imprimeStatus();
  
    } else if (optPlayer2 == 4) {
        player2 = new Paladino (3200, 80, 50, 60, 60, 60, 60);
        cout << "\nStats Player 1: ";
        player2->imprimeStatus();
    } 
    
    //Inumanos:
    
    if (optPlayer2 == 5) {
        player2 = new Animal(3200, 30, 20, 80, 80, 20, 50);
        cout << "\nStats Player 2: ";
        player2->imprimeStatus();

    } else if (optPlayer2 == 6) {
        player2 = new Troll(2800, 20, 20, 100, 80, 20, 20);
        cout << "\nStats Player 2: ";
        player2->imprimeStatus();
   
    } else if (optPlayer2 == 7) {
        player2 = new Dragao(3000, 40, 20, 100, 50, 50, 30);
        cout << "\nStats Player 2: ";
        player2->imprimeStatus();
  
    } else if (optPlayer2 == 8) {
        player2 = new Zumbi (2500, 20, 20, 40, 40, 80, 50);
        cout << "\nStats Player 2: ";
        player2->imprimeStatus();
    }      
    
   
    
}

