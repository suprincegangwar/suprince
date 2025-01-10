#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int k;
    printf("Enter the number for which are you check : ");
    scanf("%d", &k);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the no. %d :", i + 1);
        scanf("%d", &arr[i]);
    }
    bool flag = false;
    int ind = 0 ;
    for(int i = 0;i<n;i++){
        if (arr[i] == k){
            flag = true;
            ind = i;
            break;
        }
    }
if ( flag = true)
printf("%d is present in array and its index is %d",k,ind);
else
printf("%d is not present in array ",k);
    return 0;}