#include <stdio.h>
int main (){
   FILE* ptr = fopen("sup.txt","r");
   FILE* ktr = fopen("supr.txt","w");
   char str ;
  while((str = fgetc(ptr)) != EOF){
    fputc(str,ktr);
  }
  fclose(ptr);
  fclose(ktr);

return 0;

}