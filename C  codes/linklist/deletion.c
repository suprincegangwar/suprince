#include <stdio.h>
#include <stdlib.h>
 struct node {
    int data;
    struct node* next;
 };

 void traversal(struct node* ptr){
    while(ptr != NULL){
        printf("Element : %d \n", ptr -> data);
        ptr = ptr -> next;
    }
 }
 struct node*deletionatfirst(struct node* head ){
    struct node*ptr = head;
    head = head -> next;
    free(ptr);
    return head;
 
 }
 struct node*deletionatnode(struct node* head , struct node* prenode){
    struct node*ptr = prenode -> next;
    prenode ->next = ptr -> next ;
    free(ptr);
    return head;
 
 }
 struct node*deletionatend(struct node* head){
    struct node*ptr = head;
    struct node*p = head -> next;
    while(p->next!=NULL){
        ptr = ptr -> next;
    }
    ptr->next = NULL;
    free(p);
    return head;
 
 }
 struct node*deletionatindex(struct node* head , int index){
    struct node*ptr = head;
    struct node*p = head -> next;
    int i = 0;
    while(i!=index-1){
        p = p -> next;
        ptr = ptr -> next;
        i++;
    }
    ptr->next = p -> next;
    free(p);
    return head;
 
 }
 struct node* reverse(struct node* head)
   {struct node* prev = NULL;
    struct node* current = head;
    struct node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}
 int main (){
    struct node* head = malloc(sizeof(struct node));
    struct node* second = (struct node*)malloc(sizeof(struct node));
    struct node* third = (struct node*)malloc(sizeof(struct node));
    struct node* fourth= (struct node*)malloc(sizeof(struct node));
    struct node* fifth = (struct node*)malloc(sizeof(struct node));

    head->data = 6;
    head->next = second;
    second->data = 7;
    second->next = third;
    third->data = 8;
    third->next = fourth;
    fourth->data = 9;
    fourth->next = fifth;
    fifth->data = 10;
    fifth->next = NULL;

   // head = deletionatfirst(head);
    //head = deletionatend(head );
   // head = deletionatindex(head , 2);
    //head = deletionatnode(head , third);
    head = reverse(head);
    
    traversal ( head);

    return 0;
 }