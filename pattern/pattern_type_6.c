#include<stdio.h>
int main()
{
	int n,row,col;
	l:printf("Enter the number of row:");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("Enter any odd number of row:\n");
		goto l;
	}
	n=(n+1)/2;
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=n-row;col++)
		{
			//for space
			printf(" ");
		}
		for(col=1;col<=row;col++)
		{
			//for space
			printf("*");
		}
		printf("\n");
	}
	for(row=n-1;row>=1;row--)
	{
		for(col=1;col<=n-row;col++)
		{
			//for space
			printf(" ");
		}
		for(col=1;col<=row;col++)
		{
			//for space
			printf("*");
		}
		printf("\n");
	}
}
