#include<stdio.h>
int main (){
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    int r = 0;
    while(n>0){
        r = r*10 + ( n%10);
        n =  n/10;
    }
    printf("The reversed numbef is   %d",r);
    return 0 ;
}