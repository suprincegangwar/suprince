#include <stdio.h>
int main(){
int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the no. %d :", i + 1);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<n;i++){
    for(int j = i+1; j<n;j++){
    if(arr[i] == arr[j]){
    printf("%d is the duplicate element",arr[i]);
    break;
    }
    }
    }
    return 0 ;
}