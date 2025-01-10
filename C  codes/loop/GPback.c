#include<stdio.h>5

int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    int a= 100;
     for(int i=1;i<=n;i=i+1){
        printf("%d ",a);
        a = a*1/2;
    }
    return 0 ; 
    }