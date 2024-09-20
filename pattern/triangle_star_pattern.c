#include<stdio.h>
int main()
{
	int n; 
	int row,col;
	printf("Enter the row(n)");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=row;col++)
		{
			if(row==1||col==1||row==col||row==n)
			{
				printf("\t*");
			}
			else
			printf("\t");
		}
		printf("\n");
	}
}
