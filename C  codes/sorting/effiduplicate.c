// Find the duplicate one in 1 to n
#include <stdio.h>
int main (){ 
    int n , sum = 0 ;
    printf("Enter the size of : ");
    scanf("%d",&n);
    int A[n+1];
    for(int i=0;i<=n;i++){
        scanf("%d",&A[i]);
    } 
    for(int i=0;i<=n;i++){
    sum += A[i];
    }
    int sum1 = n*(n+1)/2;
     printf("%d is duplicate",sum - sum1);

    return 0;
    }
