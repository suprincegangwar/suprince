#include <stdio.h>
#include <stdlib.h>
    struct stack {
        int data ;
        struct stack *next;
    };

    struct stack* push(struct stack* top ,int data){
        struct stack*p =  (struct stack * )malloc(sizeof(struct stack));
        p->data=data;
        p->next = top; 
        return p;
    }
    int peek(struct stack* top){
        if(top == NULL)
        return -1;
        else
        return top -> data;
    }
    struct stack * pop(struct stack * top){
        if(top == NULL)
             printf("stack underflow");
        else
           return top->next;
    }
     void main(){
        struct stack* top = NULL ;
        top = push(top , 5);
        top = push(top , 15);
        top = push(top , 5);
        top = pop(top);
        int val = peek(top);
        printf("Element %d ", val);

     }
