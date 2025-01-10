#include<stdio.h>
int main (){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    int p = 1;
    for(int i=1;i<=n;i++){
    p=p*i;
    }
    printf("factorial is : %d",p);
    
    return 0;
}