#include <stdio.h>
int powerlog(int a , int b){
    if(b==0){ return 1;}
    int p =  powerlog(a,b/2);
    if (b%2==0)  return p*p ;
    else return p*p*a;}

int main(){
    int a;
    printf("Enter Base  : ");
    scanf("%d",&a);
    int b;
    printf("Enter Poewr : ");
    scanf("%d",&b);
    printf("%d",powerlog(a,b));
    return 0;
}