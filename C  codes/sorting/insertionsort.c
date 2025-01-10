// it is a stable sorting
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int A[n];
    for(int i= 0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(int i =1;i<n;i++){
       int j = i;
       while (A[j]<A[j-1] && j>0){
        int temp = A[j];
        A[j] = A[j-1];
        A[j-1] = temp;
        j--;
       } 
    }
     printf("The sorted array is :\n");
        for(int i= 0;i<n;i++){
        printf("%d ",A[i]);}
    return 0;}