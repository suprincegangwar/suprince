// check the sum of two element in sorted array is 12 
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int A[n];
    for(int i= 0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int i = 0;
    int j = n-1;
    while(i<j){
        if(A[i]+A[j]==12){
            printf("The numbers are present and their index are %d and %d",i,j);
            break;
        }
        else if(A[i]+A[j]>12){
            j--;
        }
        else {
            i++;
        }
    }
    return 0;
}