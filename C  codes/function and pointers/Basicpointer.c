#include<stdio.h>
int main(){
    int a = 5;
    int* x = &a;
    printf("%p\n",&a);//p sa adress print hota ha or a ka
    printf("%p\n",x); // a ka address print hota ha 
    printf("%p\n",&x); // x ka address print hota ha
    printf("%d\n",*x); // a ka andar ki value print hoti ha
    return 0 ;
}