#include <stdio.h>
int main(){
    int u;
    printf("Enter the unit :");
    scanf("%d",&u);
    float bill;
    if (u<=30){
        bill=0.5*u;
    }
    else if(u<=100){
        bill=0.5*30+(1.0*(u-30));
    }
    else if(u<=200){
        bill=0.5*30+1.0*70+(1.5*(u-100));
    }
    else if(u>200){
        bill=0.5*30+(1.0*70)+(1.5*100)+2.0*(u-200);
    }

    bill=bill+bill*15/100;
    printf("the bill is : %f",bill);
    return 0;
}