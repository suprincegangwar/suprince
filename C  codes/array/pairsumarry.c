#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d", &x);
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the no. %d :", i + 1);
        scanf("%d", &arr[i]);
    }
    int pair = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                pair++;
                printf("(%d,%d)\n", arr[i], arr[j]);
            }
        }
    }
    printf("%d", pair);
    return 0;
}