#include<conio.h>
#include<stdio.h>
int main()
{
	int a[5],b,c,d,i,j;
	printf("enter an array of 5 size \n");
	for(i=1;i<=5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=5;i++)
	{
		if (a[i]==5)
		printf("hello how are you\n");
	}
}
