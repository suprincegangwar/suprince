#include <stdio.h>
#include <string.h>
int main (){
    //  char str[]= "Suprince Gangwar";// modify individul char but not whole string
    //  char*ptr = str;
    char* ptr = "Suprince Gangwar";// by this initialization we can not change individual element Bcoz it save in ROM but can change whole string
    //ptr[0] = 'D';
    printf("%s",ptr);
    // int i = 0;
    // while (*ptr!='\0'){
    //     printf("%c",*ptr);
    //     ptr++;
    //     i++;
    // }
    
    return 0;
}