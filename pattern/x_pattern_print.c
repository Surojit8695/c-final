#include<stdio.h>
int main()
{
	int n; 
	int row,col;
	printf("Enter the row(n)");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=n;col++)
		{
			if(row==col||row+col==n+1)
			{
				printf("*");
			}
			else
			printf(" ");
		}
		printf("\n");
	}
}
