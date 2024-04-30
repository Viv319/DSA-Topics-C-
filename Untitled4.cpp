//searching for a number in an array using binary search
#include<bits/stdc++.h>
using namespace std;

int bin_search(int a[],int low,int high,int n,int val)
{
	if(low<=high)
	{
		int (a[mid]==val)
		return mid;
		else if(val> a[mid])
		return bin_search(a,mid+1,high,n,val);
		else
		return bin_search(a,low,mid-1,n,val);
	}
	return -a;
}



int main()
{
	int a[] ={5,10,20,30,50};
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n;i++)
	{
		int index=bin_search(a,0,n-1,n,a[i]-40);
		if(index!=i&&index!=-1)
		{
			cout<<a[index]<<" "<<a[i]<<endl;
			break;
		}
		
	}
}
