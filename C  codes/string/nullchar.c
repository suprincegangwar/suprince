#include <stdio.h>
int main (){
    char A[] = {'H','e','l','l','o','\0'};
   int i = 0;
   while ( A[i] != '\0'){
    printf("%c",A[i]);
    i++;
   }
    return 0;
}