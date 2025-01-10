#include <stdio.h>
#include <stdlib.h>
#define MAX 4

int stack[MAX];
int top = -1;

int isFull()
{
	if(top == MAX-1)
		return 1;
	else
		return 0; 
}

int isEmpty()
{
	if(top == -1)
		return 1;
	else
		return 0;
}

void push(int data)
{
	if(isFull())
	{
		print("Stack Overflow\n");
		return;
	}
	top = top+1;
	stack[top] = data;
}

int pop()
{
	int value;
	if(isEmpty())
	{
		printf("Stack Underflow\n");
		exit(1);
	}
	value = stack[top];
	top--;
	return value;
}

int peek()
{
	if(isEmpty())
	{
		printf("Stack Underflow\n");
		exit(1);
	}
	return(stack[top]);
}

void print()
{
	int i;
	if(top==-1)
	{
		printf("stack underflow\n");
		return;
	}
	for(i=top; i>=0; i--)
		printf("%d ", stack[i]);
	printf("\n");	
}
int main()
{
	int choice, data;
	while(1)
	{
		printf("\n");
		printf("1: Push\n");
		printf("2: Pop\n");
		printf("3: Print the top element\n");
		printf("4: Print all the elements\n");
		printf("5: Quit\n");
		printf("Please enter your choice");
		scanf("%d",&choice);
	
		switch(choice)
		{
			case 1:
				printf("Enter the element to be pushed");
				scanf("%d", &data);
				push(data);
				break;
			case 2:
				data = pop();
				printf("Deleted element is %d\n",data);
				break;
			case 3:
				printf("top element is %d\n", peek());
				break;
			case 4:
				print();
				break;
			case 5:
				exit(1);
			default:
				printf("wrong choice");
				
		}
	}
    return 0;
}