#include<stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for( int i=1;i<=n;i++){//outer loop shows no. of lines
        for(int i=1;i<=n;i++){//inner loop shows no. of stars
        printf("*");}
        printf("\n");}
    return 0;
}
