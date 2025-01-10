// it is an unstable sorting
#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("unsorted array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        int min = INT_MAX, minindx = -1;
        for (int j = i; j < n; j++)
        {
            if (min > A[j])
            {
                min = A[j];
                minindx = j;
            }
        }
        int t = A[minindx];
        A[minindx] = A[i];
        A[i] = t;
    }
    printf("\nSorted array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}