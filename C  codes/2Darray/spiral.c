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
    int minr = 0, maxr = n - 1, minc = 0, maxc = m - 1, Tno = n * m, count = 0;
    while (count < Tno)
    {
        for (int i = minc; i <= maxc && count < Tno ; i++)
        {
            printf("%d  ", A[minr][i]);
            count++;
        }
        minr++;
        for (int i = minr; i <= maxr && count < Tno ; i++)
        {
            printf("%d  ", A[i][maxc]);
            count++;
        }
        maxc--;
        for (int i = maxc; i >= minc && count < Tno ; i--)
        {
            printf("%d  ", A[maxr][i]);
            count++;
        }
        maxr--;
        for (int i = maxr; i >= minr && count < Tno ; i--)
        {
            printf("%d  ", A[i][minc]);
            count++;
        }
        minc++;
    }

    return 0;
}