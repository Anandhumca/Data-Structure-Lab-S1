#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *Llink;
	struct node *Rlink;
};
struct node *head = NULL;
void insertFirst()
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode == NULL)
	{
		printf("\n No Space available");
		return;
	}
	newnode->Llink = NULL;
	newnode->Rlink = NULL;
	printf("\n Enter the element to insert: \n");
	scanf("%d",&newnode->data);
	if(head == NULL)
	{
		head=newnode;
	}
	else
	{
		newnode->Rlink = head;
		head->Llink = newnode;
		head = newnode;
	}
	printf("\n %d inserted sucessfully\n",newnode->data);
}
void insertLast()
{
	struct node *newnode,*temp = head;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode == NULL)
	{
		printf("\n Error: No space available for a new node.\n");
		return;
	}
	newnode->Llink = NULL;
	newnode->Rlink = NULL;
	printf("\n Enter the element to insert last:\n");
	scanf("%d",&newnode->data);
	if(head == NULL)
	{
		head = newnode;
	}
	else
	{
		while(temp->Rlink != NULL)
		{
			temp=temp->Rlink;
		}
		newnode->Llink = temp;
		temp->Rlink = newnode;
	}
	printf("%d inserted succesfully\n",newnode->data);
}
void display()
{
	struct node *temp = head;
	if(head == NULL)
	{
		printf("\n NO ELEMENTS IN LIST \n");
		return;
	}
	else
	{
		printf("\n ** ELEMENTS IN LIST ** \n");
		while(temp != NULL)
		{
			printf("%d ",temp->data);
			temp = temp->Rlink;
		}
	}
}
void insertLocation()
{
	struct node *newnode,*temp = head,*nxt;
	int key;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode == NULL)
	{
		printf("\n Error: No space available for a new node.\n");
		return;
	}
	if(head == NULL)
	{
		printf("\n List is empty \n");
	}
	else
	{
		printf("\n Enter the key were after you want to insert the element: \n");
		scanf("%d",&key);
		while(temp != NULL && temp->data != key)
		{
			temp = temp->Rlink;
		}
		if(temp == NULL)
		{
			printf("\n NO ELEMENT FOUND \n");
			return;
		}
		printf("\n enter the element to insert: \n");
		scanf("%d",&newnode->data);
		if(temp->Rlink == NULL)
		{
			newnode->Llink = temp;
			newnode->Rlink = NULL;
			temp->Rlink = newnode;
		}
		else
		{
			nxt = temp->Rlink;
			newnode->Llink = temp;
			newnode->Rlink = nxt;
			temp->Rlink = newnode;
			nxt->Llink = newnode;
		}
		printf("\n%d inserted succesfully\n",newnode->data);
	}
}
void deleteFirst()
{
	struct node*temp=head,*nxt;
	if(head==NULL)
	{
		printf("\nlist empty\n");
		return;
	}
	printf("\n%d is deleted\n",temp->data);
	if(temp->Rlink==NULL)
	{
		head=NULL;
	}
	else
	{
		nxt=temp->Rlink;
		head=nxt;
		nxt->Llink=NULL;
	}
	free(temp);
}
void deleteLast()
{
	struct node*temp=head,*nxt;
	if(head==NULL)
	{
		printf("\n list is empty\n");
		return;
	}
	if(temp->Rlink==NULL)
	{
		printf("\n%d is deleted\n",temp->data);
		head=NULL;
	}
	else
	{
		while(temp->Rlink!=NULL)
		{
			temp=temp->Rlink;
		}
		printf("\n%d is deleted\n",temp->data);
		nxt=temp->Llink;
		nxt->Rlink=NULL;
	}
	free(temp);
}
void deleteLocation()
{
	struct node*temp=head,*prev,*next;
	int key;
	if(head==NULL)
	{
		printf("\n list is empty\n");
		return;
	}
	printf("\nEnter the key which you want to delete:\n");
	scanf("%d",&key);
	while(temp!=NULL&&temp->data!=key)
	{
		temp=temp->Rlink;
	}
	if(temp==NULL)
	{
		printf("\n no elements found\n");
		return;
	}
	if(temp->Llink==NULL)
	{
		head=temp->Rlink;
		if(head!=NULL)
		{
			head->Llink=NULL;
		}
	}
	else if(temp->Rlink==NULL)
	{
		temp->Llink->Rlink=NULL;
	}
	else
	{
		prev=temp->Llink;
		next=temp->Rlink;
		prev->Rlink=next;
		next->Llink=prev;
	}
	printf("%d deleted\n",temp->data);
	free(temp);
}
void search()
{
	int key,pos=0,found=0;
	struct node*temp=head;
	if(head==NULL)
	{
		printf("\nlist is empty\n");
		return;
	}
	printf("\nEnter the key to search:\n");
	scanf("%d",&key);
	while(temp!=NULL)
	{
		if(temp->data==key)
		{
			printf("%d is found at location %d",temp->data,pos);
			found=1;
		}
		temp=temp->Rlink;
		pos++;
	}
	if(!found)
	{
		printf("\nElement not found\n");
	}
}
void main()
{
	int choice;
	do
	{
		printf("\n*****Doubly LInkedlist*****\n");
		printf("\n1->insertFirst\n2->insertLast\n3->insertLocation\n4->deleteFirst\n5->deleteLast\n6->deleteLocation\n7->search\n8->display\n9->Exit\n");
		printf("Enter the choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:insertFirst();
				break;
			case 2:insertLast();
				break;
			case 3:insertLocation();
				break;
			case 4:deleteFirst();
				break;
			case 5:deleteLast();
				break;
			case 6:deleteLocation();
				break;
			case 7:search();
				break;
			case 8:display();
				break;
			case 9:printf("\nEXit\n");
				exit(0);
			default:printf("Enter a valid choice");
				break;
		}
	}
	while(choice!=9);
}

