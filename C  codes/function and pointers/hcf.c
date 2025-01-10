#include<stdio.h>
int min (int a,int b){
    if(a<b)
    return a;
    else
     return b;}
     int hhh(int a, int b){
        int hcf;
       //for (int i =1;i<=min(a,b);i++){
        for (int i = min(a,b);i>=1;i--){
            if(a%i==0 && b%i==0){
            hcf = i;
            break;
            }
        }
        return hcf;
     }
int main (){
    int a;
    printf("Enter the no : ");
    scanf("%d",&a);
    int b;
    printf("Enter the no : ");
    scanf("%d",&b);
    int  f = hhh(a,b);
    printf(" The hcf is :  %d",f);
    return 0;
    }
