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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {if (i%2==0){
            printf("%d ", A[i][j]);}
            else{printf("%d ",A[i][m-1-j]);
            }
        }
    printf("\n");}
    return 0;}