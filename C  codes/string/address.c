// 2^8 = 256 for character abc
// one string element storage 1 byte
// -2^31~~~~~~~ 2^31 - 1 for digits
// one array element storage 4 byte
#include<stdio.h>
int main(){
    char arr[5]= {'a','b','c','d','e'};
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);
    printf("%p\n",&arr[3]);
    printf("%p\n\n",&arr[4]);
    int brr[5] = {1,2,3,4,5,};
    printf("%p\n",&brr[0]);
    printf("%p\n",&brr[1]);
    printf("%p\n",&brr[2]);
    printf("%p\n",&brr[3]);
    printf("%p\n\n",&brr[4]);

    printf(" %d \n" ,'0');
    printf(" %d " ,'\0');
    return 0;}