#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    int r;
    printf("Enter a Number : ");
    scanf("%d",&r);
    for(int i = 0;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        } int first = 1; 
        for(int j=0;j<=i;j++){
            printf("%d ",first);
             first = first*(i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
    }