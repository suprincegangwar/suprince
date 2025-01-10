#include <stdio.h>
#include <stdlib.h>

struct Node {
    int coeff;
    int exp;
    struct Node* next;
};

struct Node* createNode(int coeff, int exp) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->coeff = coeff;
    newNode->exp = exp;
    newNode->next = NULL;
    return newNode;
}

struct Node* insertTerm(struct Node* poly, int coeff, int exp) {
    struct Node* newNode = createNode(coeff, exp);
    if (poly == NULL) {
        return newNode;
    }
    struct Node* temp = poly;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return poly;
}

void displayPoly(struct Node* poly) {
    while (poly != NULL) {
        printf("%dx^%d", poly->coeff, poly->exp);
        poly = poly->next;
        if (poly != NULL)
            printf(" + ");
    }
    printf("\n");
}

struct Node* addPolynomials(struct Node* poly1, struct Node* poly2) {
    struct Node* result = NULL;
    while (poly1 != NULL && poly2 != NULL) {
        if (poly1->exp == poly2->exp) {
            result = insertTerm(result, poly1->coeff + poly2->coeff, poly1->exp);
            poly1 = poly1->next;
            poly2 = poly2->next;
        } else if (poly1->exp > poly2->exp) {
            result = insertTerm(result, poly1->coeff, poly1->exp);
            poly1 = poly1->next;
        } else {
            result = insertTerm(result, poly2->coeff, poly2->exp);
            poly2 = poly2->next;
        }
    }
    while (poly1 != NULL) {
        result = insertTerm(result, poly1->coeff, poly1->exp);
        poly1 = poly1->next;
    }
    while (poly2 != NULL) {
        result = insertTerm(result, poly2->coeff, poly2->exp);
        poly2 = poly2->next;
    }
    return result;
}

int main() {
    struct Node* poly1 = NULL;
    struct Node* poly2 = NULL;
    struct Node* result = NULL;

    poly1 = insertTerm(poly1, 5, 2);
    poly1 = insertTerm(poly1, 4, 1);
    poly1 = insertTerm(poly1, 2, 0);

    poly2 = insertTerm(poly2, 5, 1);
    poly2 = insertTerm(poly2, 5, 0);

    printf("Polynomial 1: ");
    displayPoly(poly1);

    printf("Polynomial 2: ");
    displayPoly(poly2);

    result = addPolynomials(poly1, poly2);

    printf("Resultant Polynomial: ");
    displayPoly(result);

    return 0;
}
