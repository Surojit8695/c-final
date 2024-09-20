#include<stdio.h>
int main()
{
	int n,row,col;
	printf("Enter the number of row:");
	scanf("%d",&n);
	for(row=n;row>=1;row--)
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
