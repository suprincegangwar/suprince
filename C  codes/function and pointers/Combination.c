#include<stdio.h>
int factorial(int x){
    int fact= 1;
    for(int i=1;i<=x;i++){
    fact = fact*i;
    }
    return fact;}
    int combination(int n, int r){
        int nCr = factorial(n)/(factorial(r)*factorial(n-r));
        return nCr;
    }

int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    int r;
    printf("Enter a Number : ");
    scanf("%d",&r);
//     int nf = 1;
//     int rf = 1;
//     int nrf = 1;
// for(int i =1;i<=n;i++){
//     nf=nf*i;
// }
// for(int i =1;i<=r;i++){
//     rf=rf*i;
// }
// for(int i =1;i<=n-r;i++){
//     nrf=nrf*i;
// }
//----------------------------
// int nf = factorial(n);
// int rf = factorial(r);
// int nrf = factorial(n-r);
int nCr = combination(n,r);
printf("nCr : %d",nCr);
return 0;
    
}