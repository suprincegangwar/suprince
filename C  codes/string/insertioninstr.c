//Enter p at Index 2
#include <stdio.h>
#include <string.h>
int main (){
   char S[9] = "Surince";
    printf("%s\n",S);
   for(int i = 7 ;i>= 2;i--){
    S[i+1] = S[i];
   }
   S[2] = 'p';
   printf("%s",S);
   
    return 0;
}