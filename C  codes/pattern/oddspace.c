#include <stdio.h>
int main()
{
    int n;
    printf(" Enter a number : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            printf(" ");
        }
        // for(int k =1;k<=i*2-1;k++){
        //     printf("*");
        // }
        for(int k =1;k<=i*2-1;k++){
          printf("%d",k);
         }
        printf("\n");
    }
    return 0;
}