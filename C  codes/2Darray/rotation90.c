#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
   
    int A[n][n];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
        scanf("%d",&A[i][j]);
        }
    }
    printf("\n");
    for(int i = 0;i<n;i++){
        for(int j = i;j<n;j++){
         int temp = A[i][j];
         A[i][j] = A[j][i];
         A[j][i] = temp;
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            printf("%d  ",A[i][j]);
        }
          printf("\n");
        }
    for(int i = 0;i<n;i++){
        int j =0;
        int k=n-1;
        while(j<k){
            int temp = A[i][j];
            A[i][j] = A[i][k];
            A[i][k] = temp;
            j++;
            k--;
        }
    }
        printf("\n");
      for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            printf("%d  ",A[i][j]);
        }
          printf("\n");
        }

    return 0;}