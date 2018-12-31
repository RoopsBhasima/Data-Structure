#include <stdio.h>
#include <stdlib.h>
#define MAX 5
struct queue
{
	int item[MAX];
	int front,rear;
}q;
void enqueue(struct queue *q,int num);
void dequeue(struct queue *q);
void display(struct queue *q);
int main()
{
	int num,choice;
	q.front=0;
	q.rear=-1;
	printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
	while(1)
	{
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\nEnter the number:");
				scanf("%d",&num);
				enqueue(&q,num);
				break;
			case 2:
				dequeue(&q);
				break;
			case 3:
				display(&q);
				break;
			case 4:
				exit(0);
		}
	}
}
void enqueue(struct queue *q,int num)
{
	if(q->rear==MAX-1)
	{
		printf("\nqueue is full:");		
	}
	else
	{
		q->rear++;
		q->item[q->rear]=num;
	}
}
void dequeue(struct queue *q)
{
	int dt;
	if(q->rear<q->front){
		printf("\n queue is empty");
	}
	else
	{
		dt=q->item[q->front];
		q->front++;
		printf("deleted item %d",dt);
	}
}
void display(struct queue *q)
{
	int i;
	if(q->rear<q->front){
		printf("\nqueue is empty:");
	}
	else
	{
		printf("\nContent of queue is: \n");
		printf("front->");
		for(i=q->front;i<=q->rear;i++)
		{
			printf("%d\t",q->item[i]);
		}
		printf("<-rear");
	}
}
