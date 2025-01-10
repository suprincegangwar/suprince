#include<stdio.h>
void reverse(int arr[],int a,int b){
    for (int i=a ,j=b ;i<j;i++,j-- ){ 
        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;}
        return;
}
int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int a;
    printf("Enter the initial index : ");
    scanf("%d", &a);
    int b;
    printf("Enter the final index : ");
    scanf("%d", &b);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the no. %d :", i + 1);
        scanf("%d", &arr[i]);
    }
    reverse ( arr ,a,b);
    for(int i = 0;i<n;i++){
    printf("%d ",arr[i]);}
    return 0;}