#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define size 4
int rear = -1, front = -1,i, queue[size], element;
void enqueue()
{
	if (rear == size-1)
	{
		printf("Queue is full");
	}
	else
	{ 
		printf("Enter the element to add: ");
		scanf("%d",&element);
		front = 0;
		rear = rear + 1;
		queue[rear] = element;	
	}
}
void dequeue()
{
	if (front == -1)
	{
		printf("Queue is empty\n");
	}
	else
	{
		queue[front] = 0;
		front = front + 1;
	}
	printf("Dequeue is executed\n");
}
void display()
{	
	if (front == -1 && rear == -1)
	{
		printf("Queue is empty\n");
	}
	else
	{
		printf("The elements in the queue are: ");
		for (i=front; i<rear+1; i++)
		{
			printf("%d", queue[i]);
			printf(" ");
		}
	printf("\n");
	}
} 
int main()
{
	int number;
	while (1)
	{
		printf("\n1 for enqueue operation :\n");
		printf("2 for dequeue opeartion :\n");
		printf("3 for displaying queue: \n");
		printf("4 for exit : \n");
		printf("Enter your choices : ");
		scanf("%d", &number);
		switch(number)
		{
		case 1: 
			enqueue();
			break;
		
		case 2:
			dequeue();
			break;
				
		case 3:								
			display();
			break;
		case 4:
			exit(0);
		default:
			printf("Invalid input!");
		}
	}
	return 0;
}
