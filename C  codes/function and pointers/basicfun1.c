#include <stdio.h>

void england(){
    printf("calling to england\n");
return;
}
void australia(){
    printf("calling to australia\n");
    england();
    return;
}
void india(){
    printf("callng to india\n");
    australia();
    return;
}
int main (){
    india();
    return 0;
}
