#include<stdio.h>
#define MAX 10
int stack[MAX];
int top=-1;
void push(int item)
{
	if(top==MAX-1)
	{
		printf("\nSTACK OVERFLOW!");
		return;
	}
	stack[++top]=item;
	printf("\n %d pushed to stack",item);
}
void pop()
{
	if(top==-1)
	{
		printf("\n STACK UNDERFLOW!");
		return;
	}
	printf("\n %d popped from stack",stack[top--]);
}
void peek()
{
	if(top==-1)
	{
		printf("\n STACK IS EMPTY!");
		return;
	}
	printf("\n Top element is %d",stack[top]);
}
void display()
{
	if(top==-1)
	{
		printf("\n STACK IS EMPTY!");
		return;
	}
	printf("\n Stack elements are:");
	for(int i=top;i>=0;i--)
	{
		printf("%d\n",stack[i]);
	}
}
int main()
{
	int choice,value;
	while(1)
	{
		printf("\n\n Stack Operations Menu:");
		printf("\n1.Push");
		printf("\n2.Pop");
		printf("\n3.Peek");
		printf("\n4.Display");
		printf("\n5.Exit");
		printf("\nEnter Your Choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("\n Enter Value to push:");
				scanf("%d",&value);
				push(value);
				break;
			case 2:pop();
				break;
			case 3:peek();
				break;
			case 4:display();
				break;
			case 5:printf("\nExiting Program\n");
				return 0;
			default:printf("\n Invalid Choice!");
		}
	}
	return 0;
}
