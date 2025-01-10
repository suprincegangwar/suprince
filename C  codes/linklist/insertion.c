#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void linklistTraversal(struct Node *ptr)
{
    printf("List of values are : ");
    while (ptr != NULL)
    {
        printf(" %d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}
void printofevenvalues(struct Node *head)
{
    struct Node * p = head;
    printf("Even Values are : ");
    while(p != NULL){
    if(p->data % 2 == 0)
    {
        printf(" %d ", p->data);
        }
        p = p->next;
    }
    printf("\n");
    
}
struct Node *insertionatfirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}
struct Node *insertionatend(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;
    while(p->next!=NULL){
        p = p->next;
    }
    ptr->data = data;
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
struct Node *insertionatindex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
struct Node *insertionatafternode(struct Node *head, struct Node *preNode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    
    ptr->data = data;
    ptr->next = preNode->next;
    preNode->next = ptr;
    return head;
}
int main()
{

    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 6;
    second->next = third;

    third->data = 5;
    third->next = fourth;

    fourth->data = 2;
    fourth->next = NULL;

    head = insertionatfirst(head, 4);
    head = insertionatindex(head, 9 , 2);
    head = insertionatend(head, 7 );
    head = insertionatafternode(head,second, 8 );
    linklistTraversal(head);
    printofevenvalues(head);
    return 0;
}
