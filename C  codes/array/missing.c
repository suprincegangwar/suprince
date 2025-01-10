// Find the missing number in the continuity
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the no. %d :", i + 1);
        scanf("%d", &arr[i]);
    }
    int sum =0;
    for( int i = 0; i<=n-2 ; i++)
    sum = sum + arr[i];
    int sum1=  (n*(n+1))/2;
    printf("%d",sum1-sum);
    return 0 ;
}