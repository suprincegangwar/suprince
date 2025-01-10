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
    int B[m][n];
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
        B[i][j]= A[j][i];
        }
    }
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            printf("%d  ",B[i][j]);
        }
          printf("\n");
        }
         printf("\n");
     for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {if (i%2==0){
            printf("%d ", B[i][n-1-j]);}
            else{printf("%d ",B[i][j]);
            }
        }
    printf("\n");}

    return 0;}
