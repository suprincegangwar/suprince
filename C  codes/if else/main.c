99

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    if (n%2==0){
        printf("Even Number ");
    }
    if(n%2!=0){
        printf("Odd Number");
    }
    return 0;
}
