#include<stdio.h>
int main()
{
	int size,temp,c,d,i,j;
	printf("enter the size of an array\n");
	scanf("%d",&size);
	int a[size];
	printf("enter the element in the array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<size;i++)
	{
		for (j=0;j<size;j++)
		{
			if (a[j]>a[j+1])
			{
			
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
	}
	for(i=0;i<size;i++)
	{
		printf("%d",a[i]);
	}
	
}

