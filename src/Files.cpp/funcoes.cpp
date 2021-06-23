#include <iostream>
#include "../Files.h/classes.h"
#include <cstdlib>

using namespace std;

/* Classe Player -- Funções base ****************************************************************************************************/

int Player ::exibeHP()
{
    return 0;
};

int Player ::exibeMP()
{
    return 0;
};

int Player ::executaDanoFisico(int forcaFisica, int danoArma)
{
    return 0;
};

int Player ::executaDanoMagico(int forcaMagia, int danoFeitico)
{
    return 0;
};

int Player ::recebeDanoFisico(int danoTotal, int resistenciaFisica)
{
    return 0;
};

int Player ::recebeDanoMagia(int danoTotal, int resistenciaMagia)
{
    return 0;
};

int Player ::chanceEsquiva(int agilidade)
{
    return 0;
};

void Player ::usarFeitico (int *magicPoints, int pontosRequeridos)
{
    cout << "Não use essa função ;)";
};

/* Classe Animal ****************************************************************************************************/

int Animal ::exibeHP()
{
    return HP;
};

int Animal ::exibeMP()
{
    return MP;
};

int Animal ::executaDanoFisico(int forcaFisica, int danoArma)
{
    int danoTotal = danoArma * (1 + ((float)forcaFisica / 100));

    return danoTotal;
};

int Animal ::executaDanoMagico(int forcaMagia, int danoFeitico)
{
    int danoTotal = danoFeitico + (1 * ((float)forcaMagia / 100));
    return danoTotal;
};

int Animal ::recebeDanoFisico(int danoTotal, int resistenciaFisica)
{
    int danoReduzido = danoTotal * (1 - (float)resistenciaFisica / 100);
    return danoReduzido;
};

int Animal ::recebeDanoMagia(int danoTotal, int resistenciaMagia)
{
    int danoReduzido = danoTotal * (1 - (float)resistenciaMagia / 100);
    return danoReduzido;
};

int Animal ::chanceEsquiva(int agilidade)
{
    int escapar = (rand() % 100);

    if (escapar > agilidade)
    {
        return 0; //Não conseguiu escapar
    }
    else
    {
        return 1; //conseguiu escapar
    }
};

void Animal ::usarFeitico(int *magicPoints, int pontosRequeridos)
{
    *magicPoints -= pontosRequeridos;
}

/* Classe Troll ****************************************************************************************************/

int Troll ::exibeHP()
{
    return HP;
};

int Troll ::exibeMP()
{
    return MP;
};

int Troll ::executaDanoFisico(int forcaFisica, int danoArma)
{
    int danoTotal = danoArma * (1 + ((float)forcaFisica / 100));

    return danoTotal;
};

int Troll ::executaDanoMagico(int forcaMagia, int danoFeitico)
{
    int danoTotal = danoFeitico + (1 * ((float)forcaMagia / 100));
    return danoTotal;
};

int Troll ::recebeDanoFisico(int danoTotal, int resistenciaFisica)
{
    int danoReduzido = danoTotal * (1 - (float)resistenciaFisica / 100);
    return danoReduzido;
};

int Troll ::recebeDanoMagia(int danoTotal, int resistenciaMagia)
{
    int danoReduzido = danoTotal * (1 - (float)resistenciaMagia / 100);
    return danoReduzido;
};

int Troll ::chanceEsquiva(int agilidade)
{
    int escapar = (rand() % 100);

    if (escapar > agilidade)
    {
        return 0; //Não conseguiu escapar
    }
    else
    {
        return 1; //conseguiu escapar
    }
};

void Troll ::usarFeitico(int *magicPoints, int pontosRequeridos)
{
    *magicPoints -= pontosRequeridos;
}

/* Classe Dragão  ****************************************************************************************************/

int Dragao ::exibeHP()
{
    return HP;
};

int Dragao ::exibeMP()
{
    return MP;
};

int Dragao ::executaDanoFisico(int forcaFisica, int danoArma)
{
    int danoTotal = danoArma * (1 + ((float)forcaFisica / 100));

    return danoTotal;
};

int Dragao ::executaDanoMagico(int forcaMagia, int danoFeitico)
{
    int danoTotal = danoFeitico + (1 * ((float)forcaMagia / 100));
    return danoTotal;
};

int Dragao ::recebeDanoFisico(int danoTotal, int resistenciaFisica)
{
    int danoReduzido = danoTotal * (1 - (float)resistenciaFisica / 100);
    return danoReduzido;
};

int Dragao ::recebeDanoMagia(int danoTotal, int resistenciaMagia)
{
    int danoReduzido = danoTotal * (1 - (float)resistenciaMagia / 100);
    return danoReduzido;
};

int Dragao ::chanceEsquiva(int agilidade)
{
    int escapar = (rand() % 100);

    if (escapar > agilidade)
    {
        return 0; //Não conseguiu escapar
    }
    else
    {
        return 1; //conseguiu escapar
    }
};

void Dragao ::usarFeitico(int *magicPoints, int pontosRequeridos)
{
    *magicPoints -= pontosRequeridos;
}
/* Classe Zumbi ****************************************************************************************************/

int Zumbi ::exibeHP()
{
    return HP;
};

int Zumbi ::exibeMP()
{
    return MP;
};

int Zumbi ::executaDanoFisico(int forcaFisica, int danoArma)
{
    int danoTotal = danoArma * (1 + ((float)forcaFisica / 100));

    return danoTotal;
};

int Zumbi ::executaDanoMagico(int forcaMagia, int danoFeitico)
{
    int danoTotal = danoFeitico + (1 * ((float)forcaMagia / 100));
    return danoTotal;
};

int Zumbi ::recebeDanoFisico(int danoTotal, int resistenciaFisica)
{
    int danoReduzido = danoTotal * (1 - (float)resistenciaFisica / 100);
    return danoReduzido;
};

int Zumbi ::recebeDanoMagia(int danoTotal, int resistenciaMagia)
{
    int danoReduzido = danoTotal * (1 - (float)resistenciaMagia / 100);
    return danoReduzido;
};

int Zumbi ::chanceEsquiva(int agilidade)
{
    int escapar = (rand() % 100);

    if (escapar > agilidade)
    {
        return 0; //Não conseguiu escapar
    }
    else
    {
        return 1; //conseguiu escapar
    }
};

void Zumbi ::usarFeitico(int *magicPoints, int pontosRequeridos)
{
    *magicPoints -= pontosRequeridos;
}

/* Classe Guerreiro ****************************************************************************************************/

int Guerreiro ::exibeHP()
{
    return HP;
};

int Guerreiro ::exibeMP()
{
    return MP;
};

int Guerreiro ::executaDanoFisico(int forcaFisica, int danoArma)
{
    int danoTotal = danoArma * (1 + ((float)forcaFisica / 100));

    return danoTotal;
};

int Guerreiro ::executaDanoMagico(int forcaMagia, int danoFeitico)
{
    int danoTotal = danoFeitico + (1 * ((float)forcaMagia / 100));
    return danoTotal;
};

int Guerreiro ::recebeDanoFisico(int danoTotal, int resistenciaFisica)
{
    int danoReduzido = danoTotal * (1 - (float)resistenciaFisica / 100);
    return danoReduzido;
};

int Guerreiro ::recebeDanoMagia(int danoTotal, int resistenciaMagia)
{
    int danoReduzido = danoTotal * (1 - (float)resistenciaMagia / 100);
    return danoReduzido;
};

int Guerreiro ::chanceEsquiva(int agilidade)
{
    int escapar = (rand() % 100);

    if (escapar > agilidade)
    {
        return 0; //Não conseguiu escapar
    }
    else
    {
        return 1; //conseguiu escapar
    }
};

void Guerreiro ::usarFeitico(int *magicPoints, int pontosRequeridos)
{
    *magicPoints -= pontosRequeridos;
}

/* Classe Ladrão ****************************************************************************************************/

int Ladrao ::exibeHP()
{
    return HP;
};

int Ladrao ::exibeMP()
{
    return MP;
};

int Ladrao ::executaDanoFisico(int forcaFisica, int danoArma)
{
    int danoTotal = danoArma * (1 + ((float)forcaFisica / 100));

    return danoTotal;
};

int Ladrao ::executaDanoMagico(int forcaMagia, int danoFeitico)
{
    int danoTotal = danoFeitico + (1 * ((float)forcaMagia / 100));
    return danoTotal;
};

int Ladrao ::recebeDanoFisico(int danoTotal, int resistenciaFisica)
{
    int danoReduzido = danoTotal * (1 - (float)resistenciaFisica / 100);
    return danoReduzido;
};

int Ladrao ::recebeDanoMagia(int danoTotal, int resistenciaMagia)
{
    int danoReduzido = danoTotal * (1 - (float)resistenciaMagia / 100);
    return danoReduzido;
};

int Ladrao ::chanceEsquiva(int agilidade)
{
    int escapar = (rand() % 100);

    if (escapar > agilidade)
    {
        return 0; //Não conseguiu escapar
    }
    else
    {
        return 1; //conseguiu escapar
    }
};

void Ladrao ::usarFeitico(int *magicPoints, int pontosRequeridos)
{
    *magicPoints -= pontosRequeridos;
}

/* Classe Mago  ****************************************************************************************************/

int Mago ::exibeHP()
{
    return HP;
};

int Mago ::exibeMP()
{
    return MP;
};

int Mago ::executaDanoFisico(int forcaFisica, int danoArma)
{
    int danoTotal = danoArma * (1 + ((float)forcaFisica / 100));

    return danoTotal;
};

int Mago ::executaDanoMagico(int forcaMagia, int danoFeitico)
{
    int danoTotal = danoFeitico + (1 * ((float)forcaMagia / 100));
    return danoTotal;
};

int Mago ::recebeDanoFisico(int danoTotal, int resistenciaFisica)
{
    int danoReduzido = danoTotal * (1 - (float)resistenciaFisica / 100);
    return danoReduzido;
};

int Mago ::recebeDanoMagia(int danoTotal, int resistenciaMagia)
{
    int danoReduzido = danoTotal * (1 - (float)resistenciaMagia / 100);
    return danoReduzido;
};

int Mago ::chanceEsquiva(int agilidade)
{
    int escapar = (rand() % 100);

    if (escapar > agilidade)
    {
        return 0; //Não conseguiu escapar
    }
    else
    {
        return 1; //conseguiu escapar
    }
};

void Mago ::usarFeitico(int *magicPoints, int pontosRequeridos)
{
    *magicPoints -= pontosRequeridos;
}

/* Classe Paladino ****************************************************************************************************/

int Paladino ::exibeHP()
{
    return HP;
};

int Paladino ::exibeMP()
{
    return MP;
};

int Paladino ::executaDanoFisico(int forcaFisica, int danoArma)
{
    int danoTotal = danoArma * (1 + ((float)forcaFisica / 100));

    return danoTotal;
};

int Paladino ::executaDanoMagico(int forcaMagia, int danoFeitico)
{
    int danoTotal = danoFeitico + (1 * ((float)forcaMagia / 100));
    return danoTotal;
};

int Paladino ::recebeDanoFisico(int danoTotal, int resistenciaFisica)
{
    int danoReduzido = danoTotal * (1 - (float)resistenciaFisica / 100);
    return danoReduzido;
};

int Paladino ::recebeDanoMagia(int danoTotal, int resistenciaMagia)
{
    int danoReduzido = danoTotal * (1 - (float)resistenciaMagia / 100);
    return danoReduzido;
};

int Paladino ::chanceEsquiva(int agilidade)
{
    int escapar = (rand() % 100);

    if (escapar > agilidade)
    {
        return 0; //Não conseguiu escapar
    }
    else
    {
        return 1; //conseguiu escapar
    }
};

void Paladino ::usarFeitico(int *magicPoints, int pontosRequeridos)
{
    *magicPoints -= pontosRequeridos;
}
