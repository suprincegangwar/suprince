#include <stdio.h>
#include <stdlib.h>
#define size 8
int que[size];
int front = -1 ;
int rear = -1 ;
void insert(int value)
{
    if(rear == size - 1){
        printf("\n overflow");
    }
    if(front = -1){
        front =0;
    }
        que[++rear] = value;
    }
void delete()
{
    if(front == rear){
        front = rear = -1;

    if( front == -1)
        printf("\n underflow");
        return ;
    }
   front = front + 1;
}
void show(){
    if(front ==-1){
        printf("Empty queue \n");
        return ;
    }
    for(int i =front ; i<=rear ;i++){
        printf("%d  " , que[i]);
    }
}
void main (){
    insert(2);
    insert(4);
    insert(5);
    insert(6);
    show();
    delete();


}