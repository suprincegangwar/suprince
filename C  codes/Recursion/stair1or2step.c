#include <stdio.h>
int stair(int n)
{
    if (n == 3 )return 4;
    if (n == 1  || n==2 )return n;
    return stair(n-1) + stair(n-2) + stair(n-3);
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("%d",stair(n));
    return 0;
}