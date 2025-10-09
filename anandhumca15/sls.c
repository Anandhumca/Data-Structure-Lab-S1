#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *top=NULL;
void push()
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("\n No space available");
		return;
	}
	newnode->link=NULL;
	printf("\nEnter the element to insert:\n");
	scanf("%d",&newnode->data);
	if(top==NULL)
	{
		top=newnode;
	}
	else
	{
		newnode->link=top;
		top=newnode;
	}
	printf("\n%d inserted successfully",newnode->data);
}
void pop()
{
	struct node *temp=top;
	if(top==NULL)
	{
		printf("\n stack underflow");
		return;
	}
	printf("\n %d is popped",temp->data);
	top=temp->link;
	free(temp);
}
void display()
{
	struct node *temp=top;
	if(top==NULL)
	{
		printf("\n No elements");
		return;
	}
	printf("\n Elements in stack are:\n");
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->link;
	}
}
void peek()
{
	struct node *temp=top;
	if(top==NULL)
	{
		printf("\nstack underflow");
		return;
	}
	printf("The top element is %d",temp->data);
}
void search()
{
	struct node *temp=top;
	int key,found=0,pos=1;
	if(top==NULL)
	{
		printf("\n Stack underflow");
		return;
	}
	printf("\nEnter the element to search\n");
	scanf("%d",&key);
	while(temp!=NULL)
	{
		if(temp->data==key)
		{
			printf("\nelement %d found at %d\n",temp->data,pos);
			found=1;
		}
		pos++;
		temp=temp->link;
	}
	if(!found)
	{
		printf("\n Element not found");
	}
}
void main()
{
	int choice;
	do
	{
		printf("\n*****STACK*****\n");
		printf("\n1->Push()\n2->Pop()\n3->Peek()\n4->Display()\n5->Search()\n6->Exit");
		printf("\nEnter The Choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:push();
				break;
			case 2:pop();
				break;
			case 3:peek();
				break;
			case 4:display();
				break;
			case 5:search();
				break;
			case 6:printf("\n Exit\n");
				break;
			default:printf("Enter a valid choice");
				break;
		}
	}
	while(choice!=6);
}
	
