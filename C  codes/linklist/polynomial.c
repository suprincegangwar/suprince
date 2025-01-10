#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int coefficient;  // Coefficient of the term
    int exponent;     // Exponent of the term
    struct Node* next; // Pointer to the next node
} Node;

int main() {
    // Create the head of the linked list
    Node* polynomial = NULL;

    // Create the first node (4x^3)
    Node* node1 = (Node*)malloc(sizeof(Node));
    node1->coefficient = 4;
    node1->exponent = 3;
    node1->next = NULL;
    polynomial = node1;

    // Create the second node (3x^2)
    Node* node2 = (Node*)malloc(sizeof(Node));
    node2->coefficient = 3;
    node2->exponent = 2;
    node2->next = NULL;
    node1->next = node2;

    // Create the third node (2x^1)
    Node* node3 = (Node*)malloc(sizeof(Node));
    node3->coefficient = 2;
    node3->exponent = 1;
    node3->next = NULL;
    node2->next = node3;

    // Create the fourth node (1)
    Node* node4 = (Node*)malloc(sizeof(Node));
    node4->coefficient = 1;
    node4->exponent = 0;
    node4->next = NULL;
    node3->next = node4;

    // Print the polynomial
    Node* current = polynomial;
    printf("The polynomial is: ");
    while (current != NULL) {
        if (current->exponent > 0) {
            printf("%dx^%d ", current->coefficient, current->exponent);
        } else {
            printf("%d", current->coefficient);
        }
        if (current->next != NULL) {
            printf("+ ");
        }
        current = current->next;
    }
    printf("\n");

    // Free allocated memory
    current = polynomial;
    while (current != NULL) {
        Node* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
