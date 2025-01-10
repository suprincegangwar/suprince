#include <stdio.h>
#include <string.h>
int main (){
    char str[40];
    puts("Enter the string");//  automatically \n bhi deta  ha
    gets(str);
    int size = 0, k = 0;
    while (str[k] != '\0'){
        size++;
        k++;
    }
    int i = 0, j = size - 1;
    while(i<=j){
        char temp =str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;

    }
    puts("the  reverse is : ");
    puts(str);
    
    return 0;
}