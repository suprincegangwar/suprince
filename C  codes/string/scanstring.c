#include <stdio.h>
#include <string.h>
int main (){
    char str[40] ;
    //scanf("%s",str);// only first word will be cosidered
    scanf("%[^\n]s",str);//for all words consideration 
    printf("Your input was : %s",str);

    return 0;
}