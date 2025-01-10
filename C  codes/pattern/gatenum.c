#include<stdio.h>
int main (){
    int n;
    printf("Enter number of lines :  " );
    scanf("%d",& n);
    for( int a=1;a<=n*2-1;a++){
        printf("%d",a);
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        int b = 1;
        for(int j=1;j<=n-i;j++){
            printf("%d",b);
            b++;
        }
        for(int k=1;k<=2*i-1;k++){
            printf(" ");
            b++;
        }
        for(int l =1;l<=n-i;l++){
            printf("%d",b);
            b++;
        }
        
    printf("\n");}

    return 0;
}