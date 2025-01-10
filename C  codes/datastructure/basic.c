#include <stdio.h>
int main (){
    struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
    };
    struct pokemon pikachu;
    pikachu.hp = 60;
    pikachu.speed = 80;
    pikachu.attack = 100;
    pikachu.tier = 'A';
    
    struct pokemon charizard;
    charizard.hp = 60;
    charizard.speed = 80;
    charizard.attack = 100;
    charizard.tier = 'S';

    printf("%d",charizard.speed);
}