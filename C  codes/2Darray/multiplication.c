// R[i][j] = (k 0 to n) {A[i][k]*B[k][j]}
#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter the number of first rows : ");
    scanf("%d", &n);
    printf("Enter the number of first column : ");
    scanf("%d", &m);
    int A[n][m];
    printf("\nEnter the Element of first matrix : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n");
    int p, q;
    printf("Enter the number of second  rows : ");
    scanf("%d", &p);
    printf("Enter the number of second column : ");
    scanf("%d", &q);
    int B[p][q];
    printf("\nEnter the Element of second matrix : \n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    if (m != p)
    {
        printf("The Multiplication is not possible .");
    }
    else
    {
        int R[n][q];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < q; j++)
            {
                R[i][j] = 0;
                for (int k = 0; k < m; k++)
                {
                    R[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        printf("\nThe resultant of matrix is : \n ");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d  ", R[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}