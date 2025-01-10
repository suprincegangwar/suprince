#include <stdio.h>
#include <stdlib.h>

// to create a ata type for the linked list
typedef struct Node
{
    int data;
    struct Node *next;
} node ;

// To insert the node at first

node *insertion_Head(node **head, int value)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = value;
    newnode->next = *head;
    *head = newnode;
    return *head;
}

void insertion_last(node *head, int value)
{
    node *temp = head;

    
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = value;
    newnode->next = NULL;
    temp->next = newnode;
    temp = newnode;

    // return *head;
}

void insertion_afterpos(node *head, int value,int pos)
{
    node *temp = head;

    
    while (pos > 1)
    {
        temp = temp->next;
        pos--;
    }

    node *newnode = (node*)malloc(sizeof(node));
    newnode -> data = value;
    newnode -> next = temp->next;
    temp->next = newnode;

    // return *head;
}

int main()
{
    // to make a variable of node data type
    node *head;
    node *temp;

    // assigning a memory for the head
    head = (node *)malloc(sizeof(node));
    head->next = NULL;

    temp = head;

    int n;
    printf("Emter the size of node :");
    scanf("%d", &n);

    printf("enter the element of the node 1:  ");
    scanf("%d", &temp->data);

    for (int i = 1; i < n; i++)
    {
        node *newnode = (node *)malloc(sizeof(node));

        printf("Enter the element of the node %d:  ", i + 1);
        scanf("%d", &newnode->data);

        newnode->next = NULL; // set the newnode to point null
        temp->next = newnode; // link the previous node to next node
        temp = newnode;       // update the temp to point pn newnode
    }

    temp = head;

    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");

    int k;
    printf("Enter the element to be inserted at first:");
    scanf("%d", &k);

    head = insertion_Head(&head, k);

    temp = head;
    printf("New linked list is:\n");

    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");

    int p;
    printf("Enter the element to be inserted at last:");
    scanf("%d", &p);
    // head = 
    insertion_last(head, p);

    temp = head;
    printf("New linked list is:\n");

    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");

     int pos,s;
    printf("Enter the position after which value to be inserted :");
    scanf("%d" ,&pos);
    printf("Enter the element to be inserted :");
    scanf("%d", &s);

    insertion_afterpos(head, s,pos);

    temp = head;
    printf("New linked list is:\n");

    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }


    return 0;
}