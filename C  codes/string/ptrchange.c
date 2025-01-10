#include <stdio.h>
#include <string.h>
int main (){
    char str[] = " college Wallhah";
    // char *ptr = str ;
    // ptr = "Suprince Gangwar";
    char*poi = str;
    *poi = 'p'; 
    puts(str);
    return 0;
    }
