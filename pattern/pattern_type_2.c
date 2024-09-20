#include<stdio.h>
int main()
{
	int n;
	int row,col;
	printf("Enter the row:");
	scanf("%d",&n);
	for(row=n;row>=1;row--)
	{
		for(col=1;col<=row;col++)
		{
//			printf("%d ",col);//123,12,1
//			printf("%d ",row);
//			printf("%c ",col+64);
//			printf("%c ",row+64);
//			printf("%c ",col+96);
//			printf("%c ",row+96);
//			printf("* ");
//			printf("$ ");
//			printf("# ");
			printf("%d ",col%2);	
		}
		printf("\n");
	}
}
