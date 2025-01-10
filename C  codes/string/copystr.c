#include <stdio.h>
#include <string.h>
int main (){
    char s1[]= "Physics wallah";
    char *s2 = s1;// shallow copy
    s1 [0] = 'M';
    puts(s2);
    return 0;
    }