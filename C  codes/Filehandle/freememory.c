#include<stdio.h>
#include<stdlib.h>
int main (){
    int n;
    printf("Enter the size of number :");
    scanf("%d",& n);
    int*ptr = (int*) malloc(n*sizeof(int));
    int *p = ptr;// starting pa set kar dia
    ptr++;
    free(p);
return 0;
}