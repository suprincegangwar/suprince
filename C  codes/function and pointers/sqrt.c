#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Enter a Number : ");
    scanf("%d",&a);

    int root = sqrt(a);
    printf("The square root is : %d",root);
    return 0;
}