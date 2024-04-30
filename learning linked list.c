#include<malloc.h>
#include<stdio.h>
void create(int n);
void show();
struct node
{
	int data;
	struct node* link;
}*head;
void create(int n)
{
	struct node *newnode,*temp;
	head=(struct node*)malloc(sizeof(struct node));
	if (head==NULL)
	printf("list is empty\n");
	else
	{
		int item,i;
		printf("enter value of node 1\n");
		scanf("%d",&item);
		head->data=item;
		head->link=NULL;
		temp=head;
		for(i=2;i<=n;i++)
		{
			newnode=(struct node *)malloc(sizeof(struct node));
			if(newnode ==NULL)
			printf("unable to locate memory\n");
			else
			{
				printf("enter value of node ",i);
				scanf("%d",&item);
				newnode->data=item;
				newnode->link=NULL;
				temp->link=newnode;
				temp=temp->link;
			}
		}
	}
}
void show()
{
	struct node *temp;
	if(head==NULL)
	printf("list is empty\n");
	else
	{
		temp=head;
		while(temp!=NULL)
		{
			printf("value of node is %d\n",temp->data);
			temp=temp->link;
			
		}
	}
}
main()
{
	int n;
	printf("enter the no of element in linked list\n");
	scanf("%d",&n);
	create(n);
	show();
}
