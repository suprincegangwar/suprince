#include<stdio.h>
int main (){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    int p = 1;
    for(int i=1;i<=n;i++)
    {
    p=p*i;
    printf("\n factorial %d is : %d  ",i,p);}
    
    return 0;
}