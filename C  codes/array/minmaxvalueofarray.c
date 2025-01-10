#include<stdio.h>
int main(){
    int n ;
    printf("Enter the size of array : ");
    scanf ("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the number : ");
        scanf("%d",&arr[i]);}
    int max = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max)
        max = arr[i];
    }
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min)
        min = arr[i];
    }
    printf("%d\n",max);
    printf("%d",min);
    return  0;
}