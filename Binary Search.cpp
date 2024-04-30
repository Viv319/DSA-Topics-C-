#include<conio.h>
#include<stdio.h>
int main()
{
	int a[7]={1,3,4,6,7,8,9};
	int beg,end,mid,b,c,d,i,j;
	for(i=0;i<7;i++)
	{
		printf("%d",a[i]);
	}
	printf("enter which no. position you want to search\n");
	scanf("%d",&b);
	beg=0; end=6; mid=(beg+end)/2;
	if(a[mid]!=b&&a[mid]>=b)      
	{
		beg=0; end=mid-1; mid=(beg+end)/2;
		if(a[mid]!=b&&a[mid]<=b)
		{
			beg=mid+1; mid=(beg+end)/2;
			if(a[mid]==b)
			{
				printf("enter element found in position %d",mid+1);
			}
		}
		else if(a[mid]!=b&&a[mid]>=b)
		{
			beg=0; end=0;mid=0;
			if(a[mid]==b)
			{
				printf("element found at %d",mid+1);
			}
		}
		else
		{
			beg=1;end=1;mid=1;
			if(a[mid]==b)
			printf("element found at %d",mid+1);
		}
		
	}
	else if(a[mid]!=b&&a[mid]<=b)
	{
		beg=mid+1; end=6;mid=(beg+end)/2;
		if(a[mid]!=b&&a[mid]>=b)
		{
			beg=4;end=4;mid=4;
			if(a[mid]==b)
			printf("element found at %d",mid+1);
		}
		else if(a[mid]!=b&&a[mid]<=b)
		{
			beg=6;end=6;mid=6;
			if(a[mid]==b)
			printf("element found at %d",mid+1);
		}
		else
		{
			mid=5;
			if(a[mid]==b)
			printf("element found at %d",mid+1);
		}
	}
	else
	{
		beg=0; end=6; mid=(beg+end)/2;
		if(a[mid]==b)
		printf("element found at %d",mid+1);
	}
}
