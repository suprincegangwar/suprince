//DIsplay this  AP - 100, 97 , 94,..upto all term which are positive .
#include<stdio.h>
int main(){
    // int n; // itni baar number print hoga
    // printf("Enter a Number : ");
    // scanf("%d",&n);
    int a = 100;
     for(int i=1;a>0;i=i+1){
        printf("%d ",a);
        a = a - 3;
    }
    return 0;}