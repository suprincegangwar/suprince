// it is time efficient but not space
#include <stdio.h>
int main (){ 
    int n ;
    printf("Enter the size of : ");
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int B[n];
    for(int i=0;i<n;i++){
        B[i] = 0;
    }
      for(int i=0;i<n;i++){
       if( B[A[i]] == 0){
        B[A[i]] = 1;
       }
       else{
        printf("%d is duplicate",A[i]);
        break;
       }
      }

    return 0;
}