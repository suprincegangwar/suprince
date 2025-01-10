#include <stdio.h>
int power(int a , int b){
    if(b==0){ return 1;}
    int p = a*power(a,b-1);
return p ;}

int main(){
    int a;
    printf("Enter Base  : ");
    scanf("%d",&a);
    int b;
    printf("Enter Poewr : ");
    scanf("%d",&b);
    printf("%d",power(a,b));
    return 0;
}