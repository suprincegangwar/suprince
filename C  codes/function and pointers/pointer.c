#include <stdio.h>
int main(){
    int a=9;
    int *x=&a;// int* aak int ka adress store karta ha 
    *x = 5;//The value of a is changed
    int**y=&x;// int** aak pointer ka adress store karta ha
    printf("%d\n",a);
    printf("%p\n",&x);
    printf("%p",y);
    return 0;
}