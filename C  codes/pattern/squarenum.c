// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444
#include<stdio.h>
int main (){
    int n;
    printf("Enter number of lines :  " );
    scanf("%d",& n);
    for( int i = 1; i<=2*n-1;i++){
        for(int j = 1; j<=2*n-1;j++){
            int a = i;
            if(i>n) a = 2*n-i;
            int b = j;
            if (j>n) b = 2*n-j;
        if ( a>b)printf("%d",n-b+1);
        else printf("%d",n-a+1);}
        printf("\n");
    }
    return 0 ;}