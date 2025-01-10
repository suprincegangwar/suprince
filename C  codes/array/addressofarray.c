// array's one alement memory is4 byte
#include<stdio.h>
int main(){
    int arr[5] = {2,3,4,5,6};
    for(int i=0;i<=4;i++){
        printf("%p\n",&arr[i]);
    }
    return  0;
}