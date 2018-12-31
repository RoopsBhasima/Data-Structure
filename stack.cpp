#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define SIZE 5
struct stack
{
	int item[SIZE];
	int top;
};
struct stack s;
void push (struct stack *s,int num)
{
	if(s->top==(SIZE-1))
	{
		printf("\n stack is full");
		exit(0);
	}
	else
	{
		s->top++;
		s->item[s->top]=num;
	}
}
void pop(struct stack *s)
{
	int dt;
	if(s->top==-1)
	{
		printf("\nStack is empty");
		exit(0);
	}
	else
	{
		dt=s->item[s->top];
		s->top--;
		printf("\nThe poped item= %d",dt);
	}
}
void display(struct stack *s)
{
	int i;
	if(s->top==-1)
	{
		printf("\n Stack is empty:");
		exit(0);
	}
	else
	{
		printf("\n The content of stack is:");
		for(i=s->top;i>=0;i--)
		{
			printf("\n|%d|",s->item[i]);
		}
	}
}
int main()
{
	int num,choice;
	s.top=-1;
	printf("1.Push\n2.Pop\n3.display\n4.Exit");
	while(1)
	{
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\nEnter the number:");
				scanf("%d",&num);
				push(&s,num);
				break;
			case 2:
				pop(&s);
				break;
			case 3:
				display(&s);
				break;
			case 4:
				exit(0);	
		}
	}
	getch();
}
