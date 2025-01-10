#include <stdio.h>
int main(){
    int n , m;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    printf("Enter the number of column : ");
    scanf("%d",&m);
    int A[n][m];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
        scanf("%d",&A[i][j]);
        }
    }
    printf("\n");
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
        printf("%d  ",A[i][j]);
        }
        printf("\n");
    }
    int k,maxsum = 0;
    for(int i = 0;i<n;i++){
        int sum = 0;
        for(int j = 0;j<m;j++){
            sum += A[i][j];
        }
        if(sum>maxsum){
        k=i + 1;
        maxsum = sum;}
        }
        printf("Max sum is %d of row %d",maxsum,k);
    return 0;
}