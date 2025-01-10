#include <stdio.h>
#define size 5
int stack[size];
int top = -1 ;
void push(int value)
{
    if(top == size - 1){
        printf("\n overflow");
    }
    else {
        top = top + 1;
        stack[top] = value;
    }
}
void pop()
{
    if(top == -1){
        printf("\n underflow");
    }
    else{
        top = top -1;
    }
}
int peek(){
    return (top == -1) ? -1 : stack[top];   
}
void main (){
    push(5);
    push(4);
    push(3);
    push(1);
    pop();
    int value = peek();
    printf("top element %d", value);

}