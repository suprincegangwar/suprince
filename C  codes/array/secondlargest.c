#include <stdio.h>
#include <limits.h>
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
    int max = INT_MIN;
    int smax = INT_MIN;
    //     for(int i = 0 ;i<n; i++ ){
    //     if(max<arr[i])
    //     max = arr[i];}
    //     for(int j =0 ;j<n;j++){
    //    if( arr[j]!=max && smax<arr[j])
    //    smax = arr[j];}
    //    printf("%d",smax);
    // IN A SINGLE LOOP
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            smax = max;
            max = arr[i];
        }
        else if (arr[i] != max && smax < arr[i])
            smax = arr[i];
    }
    printf("%d", smax);
    return 0;
}