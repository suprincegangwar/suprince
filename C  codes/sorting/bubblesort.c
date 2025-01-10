// bubble is a stable sorting
#include <stdio.h>
#include <stdbool.h>
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
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                int t = A[j];
                A[j] = A[j + 1];
                A[j + 1] = t;
                flag = false;
            }
        }
        if (flag == true)
            break;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}