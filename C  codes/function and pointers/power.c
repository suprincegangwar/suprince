#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Enter Number a : ");
    scanf("%d",&a);
    int b;
    printf("Enter Number b : ");
    scanf("%d",&b);
    int power = pow(a,b);
    printf("The a to the power b is :  %d",power);

    return 0;
}