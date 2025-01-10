#include <stdio.h>
int main (){
    int arr[5]={3,4,5,6,7};
    int brr[5];
    for(int i = 0; i<5;i++){
    brr[i]=arr[5-i-1];
    printf("%d ",brr[i]);}
    return 0 ;
}