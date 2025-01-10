#include <stdio.h>
#include <wchar.h>
int main (){
   FILE* ptr = fopen("Ak.txt","w");
   char str [] = "hello hello hello hi ";
   fputs(str,ptr);
   fclose(ptr);
return 0;

}