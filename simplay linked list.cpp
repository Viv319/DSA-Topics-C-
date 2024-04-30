#include<stdio.h>
#include<malloc.h>
void create_list(int);
void display();
struct node
{
	int data;          //data part of the list
	struct node *link; //link part of the list
}*head;                //head pointer of the list
void create_list(int n)
{
	struct node *newnode,*temp;
	head=(struct node*)malloc(sizeof(struct node));
	if(head==NULL)
		printf("Unable to allocate memory");
	else
	{
		int item,i;
		printf("Enter the data of node 1");
		scanf("%d",&item);
		head->data=item;
		head->link=NULL;
		temp=head;
		for(i=2;i<=n;i++)
		{
			newnode=(struct node *)malloc (sizeof(struct node));
			if(newnode==NULL)
			printf("unable to allocate memory");
			else
			{
				printf("enter data of %d node ",i);
				scanf("%d",&item);
			    newnode->data=item;
			    newnode->link=NULL;
			    temp->link=newnode;
			    temp=temp->link;
			}
		}
	}
}
	void display()
	{
		struct node *temp;
		if(head==NULL)
		{
			printf("Lists is empty\n");
		}
		else
		{
			temp=head;
			while (temp!=NULL)
			{
				printf("the value of node is %d\n",temp->data);
				temp=temp->link;
			}
		}
	}
	int main()
	{
		int n;
		printf("enter no. of elements\n");
		scanf("%d",&n);
		create_list(n);
		display();
	}
