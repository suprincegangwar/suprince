#include <stdio.h>
int main(){
int a,b,c, max;
printf("Enter the value of a ,b ,c \n ");
scanf("%d %d %d",&a,&b,&c);
max = (a>b&&a>c)? a:(b>c)? b:c;
printf("max is %d :",max);
    return 0;
}