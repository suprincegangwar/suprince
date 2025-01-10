#include <stdio.h>
#include <stdlib.h>

#define MAX 5 

int main() {
    int stack_arr[MAX]; 
    int top = -1; 
    int choice, value;

    while (1) {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Push
                if (top == MAX - 1) {
                    printf("Stack Overflow\n");
                } else {
                    printf("Enter value to push: ");
                    scanf("%d", &value);
                    stack_arr[++top] = value;
                    printf("Pushed %d to stack\n", value);
                }
                break;

            case 2: // Pop
                if (top == -1) {
                    printf("Stack Underflow\n");
                } else {
                    printf("Popped: %d\n", stack_arr[top--]);
                }
                break;

            case 3: // Peek
                if (top == -1) {
                    printf("Stack is empty\n");
                } else {
                    printf("Top element is: %d\n", stack_arr[top]);
                }
                break;

            case 4: // Exit
                exit(0);

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
