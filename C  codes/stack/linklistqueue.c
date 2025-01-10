#include <stdio.h>
#include <stdlib.h>

struct Queue {
    int data;
    struct Queue* next;
};

struct Queue* front = NULL;
struct Queue* rear = NULL;

void enqueue(int data) {
    struct Queue* p = (struct Queue*)malloc(sizeof(struct Queue));
    p->data = data;
    p->next = NULL;

    if (rear == NULL) {
        front = rear = p;
        return;
    }

    rear->next = p;
    rear = p; 
}

int dequeue() {
    if (front == NULL) {
        printf("Queue is empty!\n");
        return -1;
    }

    struct Queue* temp = front;
    int data = temp->data;
    front = front->next;

    if (front == NULL)
        rear = NULL;

    free(temp);
    return data;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    printf("Dequeued element: %d\n", dequeue());
    printf("Dequeued element: %d\n", dequeue());

    return 0;
}
