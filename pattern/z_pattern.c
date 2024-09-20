#include<stdio.h>
int main()
{
	int n,row,col;
	printf("Enter any odd number of row");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=n;col++)
		{
			if(row==1||row+col==n+1||row==n)
			{
				printf("* ");
			}
			else
			printf("  ");
		}
		printf("\n");
	}
}
