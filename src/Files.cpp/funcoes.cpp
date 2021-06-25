#include <iostream>
#include "../Files.h/classes.h"
#include <cstdlib>

using namespace std;

/* Classe Player -- Funções base ****************************************************************************************************/

Player::Player(int HP, int MP, int manaForce, int physDamage, int physResist, int manaResist, int agility){
    this-> HP = HP;
    this-> MP = MP;
    this-> manaForce = manaForce;
    this-> physDamage = physDamage; 
    this-> physResist = physResist;
    this-> manaResist = manaResist;
    this-> agility = agility;
}

//Funcao para testes

void Player::imprimeStatus(){
    cout << "HP: " << HP <<" - MP: "<< MP << " - manaForce: " << manaForce<< " - physDamage: " << physDamage<< " - physResist: " << physResist<< " - manaResist: " << manaResist<< " - agility: " << agility<<"\n";
};

int Player ::exibeHP()
{
    return HP;
};

int Player ::exibeMP()
{
    return MP;
};


int Player ::executaDanoFisico(int danoArmaMinimo, int danoArmaMaximo)
{
    int danoArma = (rand() % (danoArmaMaximo - danoArmaMinimo)) + danoArmaMinimo;
    int danoTotal = danoArma * (1 + ((float)this->physDamage / 100));
    return danoTotal;
};

int Player ::executaDanoMagico(int danoFeitico, int gastoMP)
{
    if(this->MP >= gastoMP) {
        int danoTotal = danoFeitico + (1 * ((float)this->manaForce / 100));
        this->MP -= gastoMP;
        if(danoTotal < 0) { //caso seja um feitiço de cura
            this->HP -= danoFeitico;
        }
        return danoTotal;
    } else {
        cout << "\nMP insuficiente! PERDEU A RODADA HAHAHAHA\n\n";
        return -1; //caso não tenha MP suficiente
    }
    
};

int Player ::recebeDanoFisico(int danoTotal)
{
    int danoReduzido = danoTotal * (1 - (float)this->physResist / 100);
    this->HP -= danoReduzido;
    return danoReduzido;
};

int Player ::recebeDanoMagia(int danoTotal)
{
    int danoReduzido = danoTotal * (1 - (float)this->manaResist / 100);
    this->HP -= danoReduzido;
    return danoReduzido;
};

int Player ::chanceEsquiva()
{
    int escapar = (rand() % 100);

    if (escapar > this->agility)
    {
        return 0; //Não conseguiu escapar
    }
    else
    {
        cout << "\nDESVIOU JOGA MUITO!\n";
        return 1; //conseguiu escapar
    }
};
