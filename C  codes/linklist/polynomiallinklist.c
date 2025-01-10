#include <stdio.h>
#include <stdlib.h>

struct node {
    int coeff;
    int exp;
    struct node* next;
};

struct node* insertTerm(struct node* head, int coeff, int exp) {
    struct node* p = (struct node*)malloc(sizeof(struct node));
    p->coeff = coeff;
    p->exp = exp;
    p->next = NULL;

    if (head == NULL) {
        return p;
    }

    struct node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = p;
    return head;
}

void displayPolynomial(struct node* head) {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%dx^%d", temp->coeff, temp->exp);
        if (temp->next != NULL && temp->next->coeff >= 0) {
            printf("+");
        }
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct node* poly = NULL;

    poly = insertTerm(poly, 3, 2);
    poly = insertTerm(poly, -4, 1);
    poly = insertTerm(poly, 5, 0);

    printf("Polynomial: ");
    displayPolynomial(poly);

    return 0;
}
