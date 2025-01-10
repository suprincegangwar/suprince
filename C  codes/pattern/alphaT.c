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
        int a =1;
        for(int k =1;k<=i*2-1;k++){
            int d = 64 +a;
            char ch = (char)d;
          printf("%c",ch);
          a=a+1;
         }
        printf("\n");
    }
    return 0;
}