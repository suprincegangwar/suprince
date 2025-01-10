#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    // for( int i=1;i<=n;i++){//outer loop shows no. of lines
    //     for(int j=1;j<=n+1-i;j++){//inner loop shows no. of stars
    int a = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            printf("*");
        }
        a--;
        printf("\n");
    }
    return 0;
}
