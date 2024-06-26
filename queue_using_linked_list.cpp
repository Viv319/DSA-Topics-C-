#include<iostream>
using namespace std;
struct node
{
int info;
node *next;
}*front=NULL, *rear=NULL;

void insertion(int);
void deletion();
int peek();

int main()
{
int val, choice;    
while(1)
    {
cout<<"\n**** Enter choice: ****"  <<endl;
cout<<"1 : Insert"  <<endl;
cout<<"2 : Delete"  <<endl;
cout<<"3 : Peek"  <<endl;
cout<<"4 : Exit"  <<endl;
cin>>choice;
switch(choice)
            {
case 1: 
cout<<"Enter value to insert: ";
cin>>val;
insertion(val);
break;                     
case 2:
deletion();
break;                     
case 3:
peek();
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

void insertion(int val)
{
node *temp = new node;
temp->info = val;
temp->next = NULL;
if(rear==NULL)              //checking if queue is empty        
front = rear = temp;              
else
    {
rear->next = temp;     //connecting last node with new node
rear = temp;           //moving rear pointer to last node
    }    
}

void deletion()
{
node *p;
if(front==NULL)           //checking if queue is empty
cout<<"UnderFlow..." <<endl; 
else if(front==rear)      //checking if only 1 element remaining in queue
     {
         p = front;
front = rear = NULL;
cout<<"Element deleted is: " <<p->info <<endl;
delete p;    
     }
else
     {
         p = front;
front = front->next;
cout<<"Element deleted is: " <<p->info <<endl;
delete p;    
     }
}

int peek()
{
node *p = front;
if(p==NULL)
   {
cout<<"Queue is empty..." <<endl;
return 0;           
   }

cout<<"\n Element in queue are: " <<endl;
while(p!=NULL)
   {
cout<<p->info <<"  ";   
       p = p->next;           
   }          
cout<<endl; 
}

