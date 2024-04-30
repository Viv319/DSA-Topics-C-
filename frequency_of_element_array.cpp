//10)	Write a program to find frequency of each element in an array using pointer.
#include<iostream>
using namespace std;
main()
{
	int i,*ptr,a[20],b[20],j,count;
	int n;
	cout<<"enter no of elemnts";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=-1;
	}
	//ptr=&a[0];
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				b[j]=0;
				count++;
			}
		}
		if(b[i]!=0)
		b[i]=count;
		
	}
	for(i=0;i<n;i++)
	{
		if(b[i]!=0)
		{
			cout<<" element "<<a[i]<<" occurs "<<b[i]<<" times."<<endl;
		}
	}
}
