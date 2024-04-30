#include<bits/stdc++.h>
using namespace std;
struct node
{
	node *prev;
	int info;
	node *next;       
}*start=NULL;

void creation();
void insertion(node *);
int deletion(node *);
void display(node *);

int main()
{
	int choice;
	
	if(start==NULL)
	    {
			creation();
    	}    

	while(1)
    {
		cout<<"\n**** Enter choice: ****"  <<endl;
		cout<<"1 : Insertion"  <<endl;
		cout<<"2 : Deletion"  <<endl;
		cout<<"3 : Display"  <<endl;
		cout<<"4 : Exit"  <<endl;
		cin>>choice;
		switch(choice)
            {
				case 1: 
					insertion(start);
					break;                     
				case 2:
					deletion(start);
					break;                     
				case 3:
					display(start);
					break;
				case 4:
					exit(1);
					break;
				default:
					cout<<"Wrong choice..." <<endl;          
            }
    }  
return 0;    
}

void creation()
{
	start = new node;
	cout<<"Enter data-value for 1st node: ";
	cin>>start->info;
	start->prev = NULL;
	start->next = NULL;
}

void insertion(node *p)                    //Here "p" is traversing pointer
{
	while(p->next!=NULL)
     {
          p = p->next;                    
     }
	node *temp = new node;
	cout<<"Enter data-value: ";
	cin>> temp->info; 
	temp->next = NULL;
	p->next = temp;                      //joining last node with new node
	temp->prev = p;                      //joining new node with last node
}

int deletion(node *ptr)                  //Here "ptr" is traversing pointer
{
	if(ptr==NULL)
     {
		cout<<"List is empty.."  <<endl;
		return 0;
     }
	int val;
	cout<<"Enter data-value to delete: ";
	cin>>val; 
	while( (ptr!=NULL)&&(ptr->info!=val) )
     {
		ptr = ptr->next;                    
     }

	if(ptr==NULL)                         //element not found
     {     
		cout<<"Value doesn't exist in list"  <<endl; 
		return 0;
     }
	else if(ptr->prev==NULL)             //element found at 1st location
     {
		start = start->next;
		delete ptr;     
     }          
	else                                //element found at other locations
     {
        (ptr->prev)->next = ptr->next;  //joining previous node with next node
		delete ptr;   
     }
}

void display(node *p)                     //Here "p" is traversing pointer
{	
	cout<<"\n Elements in linked-list are: " <<endl;
	while(p!=NULL)
     {
		cout<<p->info  <<" <==> ";
        p = p->next;
     }        
	cout<<"NULL" <<endl;
}

