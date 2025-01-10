#include<stdio.h>
int main (){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    int a = 1;
    int b = 1;
    int sum = 1;
    if (n==1){
            printf ("The 1st fibonacci : 1 ");}
    if (n==2){
        printf ("The 2nd fibonacci  : 2 ");
    }
     else {for(int i=1;i<=n-2;i++){
        sum = a+b;
        a = b;
        b = sum;
        
         printf("\n The  %dth fibonacci : %d",i+2,sum);}}
    return 0;
}