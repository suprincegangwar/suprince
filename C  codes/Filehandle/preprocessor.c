#include<stdio.h>
#include<math.h>
#include<limits.h>
#include<stdbool.h>
int main(){
    float x = cbrt(10);
    float y = sqrt(10);
    printf("%f\n%f",x ,y);
    int a = INT_MIN;
    int b = INT_MAX;
    printf("\n%d\n%d",a ,b);
    long c = LONG_MIN;
    long  d = LONG_MAX;
    printf("\n%ld\n%ld",c ,d);
    bool flag = true;
    int n;
    printf("\nEnter the number : ");
    scanf("%d",&n);
    if(n%2==0){
    flag = false;}
    if (flag == false){
        printf("it is not odd");
    }
    else { printf("it is not even");}
    return 0 ;
}
