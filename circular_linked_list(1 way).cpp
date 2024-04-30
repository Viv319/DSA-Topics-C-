#include<iostream>
using namespace std;
struct node
{
int info;
node *next;       
}*start=NULL;

void creation();
void insertAtLast(node *);
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
cout<<"1 : Insertion At Last"  <<endl;
cout<<"2 : Deletion"  <<endl;
cout<<"3 : Display"  <<endl;
cout<<"4 : Exit"  <<endl;
cin>>choice;
switch(choice)
            {
case 1: 
insertAtLast(start);
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
start->next = start;
}

voidinsertAtLast(node *p)                    //Here "p" is traversing pointer
{
while(p->next!=start)
     {
          p = p->next;                    
     }
node *temp = new node;
cout<<"Enter data-value: ";
cin>> temp->info; 
p->next = temp;                      //joining last node with new node
temp->next = start;                  //joining new node with 1st node
}

int deletion(node *ptr)                  //Here "ptr" is traversing pointer
{
node *loc = NULL;                    //location of element to delete
if(ptr==NULL)
     {
cout<<"List is empty.."  <<endl;
return 0;
     }

node *ptrP = start;                   //pointer previous to ptr
ptr = ptr->next;                     //initialize "ptr" from 2nd node
int val;
cout<<"Enter data-value to delete: ";
cin>>val; 
while(ptr!=start)
     { 
if(ptr->info==val)
        {
loc = ptr;                  //location found
break;
        }
else
        {
ptrP = ptr;
ptr = ptr->next;    
        }               
     }     
if(ptr->info==val)                 //testing element at 1st location which is not tested in loop
     {
loc = ptr;                  //location found
     }


if(loc==NULL)                     //element not found
     {     
cout<<"Value doesn't exist in list"  <<endl; 
return 0;
     }
else if(ptrP==ptr)             //element found at 1st location
     {
start = NULL;
delete ptr;     
     }          
else                                  //element found at other locations
     {
ptrP->next = ptr->next;         //joining previous node with next node
start = ptr->next;             //resetting the start pointer
delete ptr;   
     }
}

void display(node *p)                   //Here "p" is traversing pointer
{
cout<<"\n Elements in linked-list are: " <<endl;
if(p==NULL)                       //testing is list is empty
     {
cout<<"NULL";           
     }
else
     {
do
         {
cout<<p->info  <<" --> ";
             p = p->next;
}while(p!=start);    
cout<<p->info;               //printing 1st element again to depict circular list
     }
}

