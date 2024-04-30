//sublilme search

#include<bits/stdc++.h>
using namespace std;
struct node
{
int data;
node *next;
 };
 node* addnode(int data)
 {
 	node *newnode=new node;
 	newnode->data=data;
 	newnode->next=NULL;
 	return newnode;
 }
 
 bool sunlist(node *first , node *second)
 {
 	if(first==NULL&&second==NULL)
 	return true;
 	if((first==NULL&&second!=NULL)||second==NULL&&first!=NULL)
 	return false;
 	node *curr1=first;
 	node *curr2=second;
 	while(curr2!=NULL)
 	{
 		node *temp =curr2;
 		curr1=first;
 		while(curr1!=NULL)
 		if(curr1->data !=temp->data)
		 break;
		 temp=temp->next;
		 curr1=curr1->next;
 	}
 	if(curr1==NULL)
 	return true;
 	curr2=curr2->next;
 	return false;
 }
 

 int main()
 {
 	node *first =addnode(1);
 	first->next=addnode(2);
 	first->next->next=addnode(3);
 	node *second =addnode(4);
 	second->next=addnode(5);
 	second->next->next=addnode(1);
 	second->next->next->next=addnode(2);
 	second->next->next->next->next=addnode(3);
 	if (sunlist(first,second))
 	{ cout<<"Found";
 	}
 	else
 	cout<<"Not Found";
 	
 }

