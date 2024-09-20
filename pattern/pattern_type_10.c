#include<stdio.h>
int main()
{
	int n,row,col;
	l:printf("Enter the row:");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("Enter any odd number of row\n");
		goto l;
	}
	n=(n+1)/2;
	for(row=1;row<=n;row++)
	{
		//for space
		for(col=1;col<=n-row;col++)
		{
			printf("\t");
		}
		//for star print
		for(col=1;col<=2*row-1;col++)
		{
//			printf("%c\t",col+64);
			printf("%d\t",col);
		}
		printf("\n");
	}
	for(row=n-1;row>=1;row--)
	{
		//for space
		for(col=1;col<=n-row;col++)
		{
			printf("\t");
		}
		//for star print
		for(col=1;col<=2*row-1;col++)
		{
//			printf("%c\t",col+64);
			printf("%d\t",col);
		}
		printf("\n");
	}
}
