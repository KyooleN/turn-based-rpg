class Inumanos 
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