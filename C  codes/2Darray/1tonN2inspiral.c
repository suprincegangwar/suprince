#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter the number of  rows : ");
    scanf("%d", &n);
    printf("Enter the number of  columns : ");
    scanf("%d", &m);
    int A[n][m];
    int minr = 0, maxr = n - 1, minc = 0, maxc = m - 1, Tno = n * m, count = 0;
    while (count < Tno)
    {
        for (int i = minc; i <= maxc && count < Tno; i++)
        {
            A[minr][i] = count + 1;
            count++;
        }
        minr++;
        for (int i = minr; i <= maxr && count < Tno; i++)
        {
            A[i][maxc] = count + 1;
            count++;
        }
        maxc--;
        for (int i = maxc; i >= minc && count < Tno; i--)
        {
            A[maxr][i] = count + 1;
            count++;
        }
        maxr--;
        for (int i = maxr; i >= minr && count < Tno; i--)
        {
            A[i][minc] = count + 1;
            count++;
        }
        minc++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d  ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}