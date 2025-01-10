#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a = 0;
        for (int j = 1; j <= n + 1 - i; j++)
        {
            int d = a + 65;
            printf("%c ", d);
            a++;
        }
        if (i == 1)
        {
            int c = n - i;
            for (int h = 1; h <= n - i; h++)
            {
                int d = c + 64;
                printf("%c ", d);
                c--;
            }
        }
        else
        {
            for (int k = 1; k <= i * 2 - 3; k++)
            {
                printf("  ");
            }
            int b = n - i + 1;
            for (int h = 1; h <= n + 1 - i; h++)
            {
                int d = b + 64;
                printf("%c ", d);
                b--;
            }
        }

        printf("\n");
    }
    return 0;
}