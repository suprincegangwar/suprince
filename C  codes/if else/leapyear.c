#include<stdio.h>
int main(){
    int n ;
    printf("Enter a Year : ");
    scanf("%d",&n);
    if(n%400==0 || n%4==0 && n%100!=0)
    printf("its a leap year");
    else
    printf("its  not a leap year");
    return 0;
}