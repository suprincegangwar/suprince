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
    int k;
    printf("Enter the times of rotation : ");
    scanf("%d", &k);
    k=k%n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the no. %d :", i + 1);
        scanf("%d", &arr[i]);
    }
    reverse ( arr ,0,n-1);
    reverse ( arr ,0,k-1);
    reverse ( arr ,k,n-1);
    for(int i = 0;i<n;i++){
    printf("%d ",arr[i]);}
    return 0;}