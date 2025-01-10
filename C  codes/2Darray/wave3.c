#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter the number of  rows : ");
    scanf("%d", &n);
    printf("Enter the number of  columns : ");
    scanf("%d", &m);
    int A[n][m];
    printf("\nEnter the Element of  matrix : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {if (i%2==0){
            printf("%d ", A[n-1-j][i]);}
            else{printf("%d ",A[j][i]);
            }
        }
    }
    return 0;}