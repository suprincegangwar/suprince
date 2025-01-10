#include <stdio.h>
int main (){
   int A[2][2] = {{1,2},{2,3}};
   int B[2][2] = {{3,4},{4,5}};
   for(int i =0 ;i<2;i++){
    for(int j =0;j<2;j++){
        printf("%d  ",A[i][j]+B[i][j]);
    }
    printf("\n");
   }
    return 0;
}