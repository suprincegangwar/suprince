#include <stdio.h>
int main (){
    // char A[] = "Hello Google \0";
    char A[] = "Hello Google";
   int i = 0;
   while ( A[i] != '\0'){
    printf("%c",A[i]);
    i++;
   }
    return 0;
}