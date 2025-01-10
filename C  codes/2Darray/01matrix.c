//find row have more 1;
#include <stdio.h>
int main(){
    int n , m;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    printf("Enter the number of column : ");
    scanf("%d",&m);
    int A[n][m];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
        scanf("%d",&A[i][j]);
        }
    }
    printf("\n");
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
        printf("%d  ",A[i][j]);
        }
        printf("\n");
    }
    int maxindex = 0 , maxcount = 0;
    for(int i = 0;i<n;i++){
        int count =0;
        for(int j = 0;j<m;j++){
            if(A[i][j] == 1){
                count++;}}
        if (maxcount<count){
            maxcount = count;
            maxindex = i;
        }
        }
        printf("The number of 1s is : %d in index :  %d",maxcount, maxindex);
    return 0;}