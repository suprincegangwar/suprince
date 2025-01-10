#include<stdio.h>
#include<stdlib.h>
int main (){
    int n;
    printf("Enter the size of number :");
    scanf("%d",& n);
    int*ptr = (int*) malloc(n*sizeof(int));
printf("%p\n",ptr);
   ptr = realloc(ptr, (n+2000)*sizeof(int));
   printf("%p",ptr) ;
return 0;
}