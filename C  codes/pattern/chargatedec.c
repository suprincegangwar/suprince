#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of lines :  ");
    scanf("%d", &n);
    int a = 1;
    for (int a = 1; a <= n * 2 - 1; a++)
    {
        int d = 64 + a;
        char ch = (char)d;
        printf("%c", ch);
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        int b = 1;
        for (int j = 1; j <= n - i; j++)
        {
            int c = 64 + b;
            char ch = (char)c;
            printf("%c", ch);
            b++;
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf(" ");
            b++;
        }
        for (int l = 1; l <= n - i; l++)
        {
            int d = 64 + b;
            char ch = (char)d;
            printf("%c", ch);
            b++;
        }

        printf("\n");
    }

    return 0;
}