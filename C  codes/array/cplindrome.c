#include<stdio.h>
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
    int count = 0;
      for (int i=0 ,j=n-1 ;i<j;i++,j-- ){ 
        if (arr[i]==arr[j])
       count++;
            }
   if (count == n/2)
   printf("it is plindrome");
   else
   printf("it is not plindrome");
    return 0 ;
}