#include <stdio.h>
int main (){
    int A[4][2];
    for(int i =0;i<4;i++){
        for (int j = 0;j<2;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(int i =0;i<4;i++){
        for (int j = 0;j<2;j++){
            printf("%d  ",A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
