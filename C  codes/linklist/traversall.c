# include <stdio.h>
# include <stdlib.h>
struct Node 
{
    int data ;
    struct Node *next;
};

void linklistTraversal(struct Node *ptr)
{
    while(ptr != NULL)
    {
        printf("Element : %d \n" , ptr->data);
        ptr = ptr->next;
    }
}
int main ()
    {
        struct Node *head;
        struct Node *second;
        struct Node *third;
        struct Node *fourth;

        head = (struct Node *)malloc(sizeof(struct Node));
        second = (struct Node *)malloc(sizeof(struct Node));
        third = (struct Node *)malloc(sizeof(struct Node));
        fourth = (struct Node *)malloc(sizeof(struct Node));

        head->data = 1;
        head->next = second;

        second->data = 7;
        second->next = third;

        third->data = 5;
        third->next = fourth;

        fourth->data = 2;
        fourth->next = NULL;

        linklistTraversal(head);
        return 0;
    }
