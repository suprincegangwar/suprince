#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of lines :  ");
    scanf("%d", &n);
    int sp = n / 2;
    int st = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sp; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= st; k++)
        {
            printf("*");
        }
        if (i < (n / 2) + 1)
        {
            sp--;
            st += 2;
        }
        else
        {
            sp++;
            st -= 2;
        }
        printf("\n");
    }

    return 0;
}