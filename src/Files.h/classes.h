

class Player { 
//essa classe vai ter todas as habilidades do jogo
//comece todas as funções com "virtual", pq dá p sobrescrever elas dps com "override" (olha a classe Animal em inumanos.h)
public:

virtual int exibeHP();
virtual int exibeMP();
int executaDanoFisico(int forcaFisica, int danoArma);
int executaDanoMagico(int forcaMagia, int danoFeitico);
int recebeDanoFisico(int danoTotal, int resistenciaFisica);
int recebeDanoMagia(int danoTotal, int resistenciaMagia);
int chanceEsquiva (int agilidade);

};

/*CLASSE INUMANOS*CLASSE INUMANOS*CLASSE INUMANOS*CLASSE INUMANOS*CLASSE INUMANOS*CLASSE INUMANOS*CLASSE INUMANOS*CLASSE INUMANOS*CLASSE INUMANOS*CLASSE INUMANOS*CLASSE INUMANOS*CLASSE INUMANOS*CLASSE INUMANOS*/

class Animal : public Player
{
    private:
    int HP = 3200;
    int MP = 30;
    int manaForce = 20;
    int physDamage = 80;
    int physResist = 80;
    int manaResist = 20;
    int agility = 50; 

};

class Troll : public Player
{
    private:
    int HP = 2800;
    int MP = 20;
    int manaForce = 20;
    int physDamage = 100;
    int physResist = 80;
    int manaResist = 20;
    int agility = 20; 

};

class Dragao : public Player
{

    private:
    int HP = 3000;
    int MP = 40;
    int manaForce = 20;
    int physDamage = 100;
    int physResist = 50;
    int manaResist = 50;
    int agility = 30; 

};

class Zumbi : public Player
{

    private:
    int HP = 2500;
    int MP = 20;
    int manaForce = 20;
    int physDamage = 40;
    int physResist = 40;
    int manaResist = 80;
    int agility = 50; 

};

/*CLASSE HUMANOS*CLASSE HUMANOS*CLASSE HUMANOS*CLASSE HUMANOS*CLASSE HUMANOS*CLASSE HUMANOS*CLASSE HUMANOS*CLASSE HUMANOS*CLASSE HUMANOS*CLASSE HUMANOS*CLASSE HUMANOS*CLASSE HUMANOS*CLASSE HUMANOS*/

class Guerreiro : public Player
{
private:
    int HP = 4000;
    int MP = 30;
    int physDamage = 100;
    int manaForce = 20;
    int physResist = 80;
    int manaResist = 20;
    int agility = 20; 

};

class Ladrao : public Player
{
private:
    int HP = 2800;
    int MP = 50;
    int physDamage = 30;
    int manaForce = 30;
    int physResist = 40;
    int manaResist = 50;
    int agility = 80; 

};

class Mago : public Player
{
private:
    int HP = 2500;
    int MP = 100;
    int physDamage = 40;
    int manaForce = 100;
    int physResist = 30;
    int manaResist = 80;
    int agility = 60; 

};

class Paladino : public Player
{
private:
    int HP = 3200;
    int MP = 80; // Provavelmente vamos ter que diminuir isso aqui
    int physDamage = 60;
    int manaForce = 50;
    int physResist = 60;
    int manaResist = 60;
    int agility = 60; 

};
