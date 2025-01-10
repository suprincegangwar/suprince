#include<stdio.h>
int main(){
    int n ;
    printf("Enter the size of array : ");
    scanf ("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the number : ");
        scanf("%d",&arr[i]);}
    int product = 1;
    for(int i=0;i<n;i++){
        product = product * arr[i];}
    printf(" The product is : %d",product);
    return  0;
}