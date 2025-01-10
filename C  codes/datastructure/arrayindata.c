#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }poke;
    poke arr[3];

    strcpy(arr[0].name , "cherizard");
    arr[0].attack = 50;
    arr[0].speed = 500;
    arr[0].hp = 100;
    arr[0].tier = 'A';

    strcpy(arr[1].name , "picachu");
    arr[1].attack = 40;
    arr[1].speed = 500;
    arr[1].hp = 400;
    arr[1].tier = 's';

    strcpy(arr[2].name , "mewtwo"); 
    arr[2].attack = 30;
    arr[2].speed = 560;
    arr[2].hp = 130;
    arr[2].tier = 'B';

    for(int i = 0; i<3;i++){
        printf(" %s \n", arr[i].name);
        printf(" attack : %d\n", arr[i].attack);
        printf(" speed : %d\n", arr[i].speed);
        printf(" hp : %d\n", arr[i].hp);
        printf(" tier : %c\n", arr[i].tier);
    }
     
    return 0;
}