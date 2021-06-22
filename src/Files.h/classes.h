class Player { 
//essa classe vai ter todas as habilidades do jogo
//comece todas as funções com "virtual", pq dá p sobrescrever elas dps com "override" (olha a classe Animal em inumanos.h)
public:

virtual int exibeHP();


};

/*CLASSE INUMANOS*CLASSE INUMANOS*CLASSE INUMANOS*CLASSE INUMANOS*CLASSE INUMANOS*CLASSE INUMANOS*CLASSE INUMANOS*CLASSE INUMANOS*CLASSE INUMANOS*CLASSE INUMANOS*CLASSE INUMANOS*CLASSE INUMANOS*CLASSE INUMANOS*/

class Inumanos : public Player
{
    private:
    int manaForce = 20;

    public:

    int healMana( int magicPoints);
    int Bul_Khatos();
};

class Animal : public Inumanos
{
    private:
    int HP = 3200;
    int MP = 30;
    int physDamage = 80;
    int physResist = 80;
    int manaResist = 20;
    int agility = 50; 

    public:
    int magicBio( int *magicPoints, int magicForce, int enemyMagicDefense, int *enemyHP );
    int physGarrasLetais(int physicalDamage, int enemyPhysResist, int *enemyHP );
    


};

class Troll : public Inumanos
{
    private:
    int HP = 2800;
    int MP = 20;
    int physDamage = 100;
    int physResist = 80;
    int manaResist = 20;
    int agility = 20; 

    public:
    int magicIntoxication( int *magicPoints, int magicForce, int enemyMagicDefense, int *enemyHP  );
    int physPorrete( int physicalDamage, int enemyPhysResist, int *enemyHP );
    int physCajado( int physicalDamage, int enemyPhysResist, int *enemyHP );


};

class Dragao : public Inumanos
{

    private:
    int HP = 3000;
    int MP = 40;
    int physDamage = 100;
    int physResist = 50;
    int manaResist = 50;
    int agility = 30; 

    public:
    int magicFireBreath( int *magicPoints, int magicForce, int enemyMagicDefense, int *enemyHP  );
    int physGarrasLetais(int physicalDamage, int enemyPhysResist, int *enemyHP );

};

class Zumbi : public Inumanos
{

    private:
    int HP = 2500;
    int MP = 20;
    int physDamage = 40;
    int physResist = 40;
    int manaResist = 80;
    int agility = 50; 

    public:
    int magicIntoxication( int *magicPoints, int magicForce, int enemyMagicDefense, int *enemyHP  );
    int physGarrasLetais(int physicalDamage, int enemyPhysResist, int *enemyHP );
    int physPorrete( int physicalDamage, int enemyPhysResist, int *enemyHP );
    int physCajado( int physicalDamage, int enemyPhysResist, int *enemyHP );
    void exibeHP();


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

public:
    Guerreiro(int HP, int MP, int physDamage, int manaForce, int physResist, int manaResist, int agility);
    int magicStorm (int *magicPoints, int magicForce, int enemyMagicDefense, int *enemyHP);
    
    int phyEspadaBarroca (int physicalDamage, int enemyPhysResist, int *enemyHP);
    int phyPorrete (int physicalDamage, int enemyPhysResist, int *enemyHP);
    int phyVotoSoleneDeBulKathos(int physicalDamage, int enemyPhysResist, int *enemyHP);
    //int healMana(int magicPoints);
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

public:
    Ladrao(int HP, int MP, int physDamage, int manaForce, int physResist, int manaResist, int agility);
    int magicIntoxication(int *magicPoints, int magicForce, int enemyMagicDefense, int *enemyHP);
    int magicStorm (int *magicPoints, int magicForce, int enemyMagicDefense, int *enemyHP);
    
    int phyCajado (int physicalDamage, int enemyPhysResist, int *enemyHP);
    int phyPorrete (int physicalDamage, int enemyPhysResist, int *enemyHP);
    int phyBesta (int physicalDamage, int enemyPhysResist, int *enemyHP);
    int phyEsferaDeAtaque (int physicalDamage, int enemyPhysResist, int *enemyHP);
    int phyVotoSoleneDeBulKathos(int physicalDamage, int enemyPhysResist, int *enemyHP);
    //int healMana(int magicPoints);
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

public:
    Mago(int HP, int MP, int physDamage, int manaForce, int physResist, int manaResist, int agility);
    int magicLifePotion (int *magicPoints, int *HP);
    int magicBio (int *magicPoints, int magicForce, int enemyMagicDefense, int *enemyHP);
    int magicHeal (int *magicPoints, int *HP);
    int magicFlamaGelada (int *magicPoints, int magicForce, int enemyMagicDefense, int *enemyHP);
    int magicIntoxication(int *magicPoints, int magicForce, int enemyMagicDefense, int *enemyHP);
    int magicStorm (int *magicPoints, int magicForce, int enemyMagicDefense, int *enemyHP);

    int phyTridenteSagrado (int physicalDamage, int enemyPhysResist, int *enemyHP);
    int phyCajado (int physicalDamage, int enemyPhysResist, int *enemyHP);
    int phyVotoSoleneDeBulKathos(int physicalDamage, int enemyPhysResist, int *enemyHP);
    //int healMana(int magicPoints);
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

public:
    Paladino(int HP, int MP, int physDamage, int manaForce, int physResist, int manaResist, int agility);
    int magicLifePotion (int *magicPoints, int *HP);
    int magicFlamaGelada (int *magicPoints, int magicForce, int enemyMagicDefense, int *enemyHP);
    int magicStorm (int *magicPoints, int magicForce, int enemyMagicDefense, int *enemyHP);
    
    int phyTridenteSagrado (int physicalDamage, int enemyPhysResist, int *enemyHP);
    int phyphyBesta (int physicalDamage, int enemyPhysResist, int *enemyHP);
    int phyVotoSoleneDeBulKathos(int physicalDamage, int enemyPhysResist, int *enemyHP);
    //int healMana(int magicPoints);
};
