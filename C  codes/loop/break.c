// Write a Programme (WAP) to check if a number is prime or not.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    int a= 0;
    for(int i=2; i<=n-1; i+1){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(n==1) printf(" 1 is neither prime nor composite");
    else if(a==0) printf("Prime Numbers\n");
    else printf("Composite Numbers\n");
     return 0 ;
}