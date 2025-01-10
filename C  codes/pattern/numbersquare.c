#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    { // outer loop shows no. of lines
        for (int j = 1; j <= n; j++)
        { // inner loop shows no. of stars
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
