#include<stdio.h>
int main()
{
	int a[5],size,s,beg,end,mid,i,j,temp;
	printf("enter the size of an array\n");
	scanf("%d",&size);
	//int a[size];
	printf("enter the element in the array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter no. to be search\n");
	scanf("%d",&s);
	beg=0;end=size-1;mid=((beg+end)/2);
	while(beg<=end )
	{
		while(a[mid]!=s)
		{
			if(s<a[mid])
			{
				end=mid-1;
				mid=((beg+end)/2);
			}
			else
			beg=mid+1;
			mid=((beg+end)/2);
			printf("element found at %d",mid);
		}
	}
	}
	
