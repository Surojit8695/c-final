#include<stdio.h>
int main()
{
	int n,row,col;
	printf("Enter the row:");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=n;col++)
		{
			printf("* ");
//			printf("%d ",col);
//			printf("%d ",row);
//			printf("%c ",col+64);
//			printf("%c ",row+64);
		}
		printf("\n");
	}
}
