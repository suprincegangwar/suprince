#include<stdio.h>
int main (){
    int n;
    printf("Enter number of lines :  " );
    scanf("%d",& n);
    for( int a=1;a<=n*2-1;a++){
        printf("*");
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("*");
        }
        for(int k=1;k<=2*i-1;k++){
            printf(" ");
        }
        for(int l =1;l<=n-i;l++){
            printf("*");
        }
        
    printf("\n");}

    return 0;
}