#include <stdio.h>
int number (int n)
{
    if ( n == 0)
        return 0;
    printf("%d\n",n);
    return number (n-1);
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
     number(n);
    return 0;
}