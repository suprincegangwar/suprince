#include <stdio.h>
int main (){
    int arr[5]={3,4,5,6,7};
    // int i = 0;
    // int j = 4;
    // while (i<=j){
        for (int i=0 ,j=4 ;i<j;i++,j-- ){ 
        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
        // i++;
        // j--;
            }

   for(int i = 0;i<5;i++){
    printf("%d ",arr[i]);}
    return 0 ;
}