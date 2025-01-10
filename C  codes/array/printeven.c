#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(i != n - 1)
        {
            char c;
            scanf("%c" ,&c);
        }
    }
    bool flag = false;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] % 2 == 0)
        {
            if (flag == true)
            {
                printf(",");
            }
            printf("%d", arr[i]);
            flag = true;
        }
    }

    return 0;
}