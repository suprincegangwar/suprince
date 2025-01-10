#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no of rows :");
    scanf("%d", &n);
    int m;
    printf("Enter the no of colmns :");
    scanf("%d", &m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("enter the %d,%d th Element :", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}