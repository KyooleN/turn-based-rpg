#include <iostream>
#include "../Files.h/classes.h"


using namespace std;

int Animal::exibeHP() {
    return HP;
}

int Troll::exibeHP() {
    return HP;
}

int Dragao::exibeHP() {
    return HP;
}

int Zumbi::exibeHP() {
    return HP;
}

int Player::exibeHP() {
    return 1;
}