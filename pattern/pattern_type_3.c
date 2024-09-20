#include<stdio.h>
int main()
{
	int n;
	int row,col;
	l:printf("Enter the row:");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("Enter any odd number of digit:\n");
		goto l;
	}
	n=(n+1)/2;
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=row;col++)
		{
//			printf("%d ",col);//1,12,123
//			printf("%d ",row);//1,22,333
//			printf("%c ",col+64);//A,AB,ABC
//			printf("%c ",row+64);//A,BB,CCC
//			printf("%c ",col+96);//a,ab,abc
//			printf("%c ",row+96);//a,bb,ccc
			printf("* ");//*,**,***
//			printf("$ ");
//			printf("# ");
//			printf("%d ",col%2);
		}
		printf("\n");
	}
	for(row=n-1;row>=1;row--)
	{
		for(col=1;col<=row;col++)
		{
//			printf("%d ",col);//123,12,1
//			printf("%d ",row);
//			printf("%c ",col+64);
//			printf("%c ",row+64);
//			printf("%c ",col+96);
//			printf("%c ",row+96);
			printf("* ");
//			printf("$ ");
//			printf("# ");
//			printf("%d ",col%2);	
		}
		printf("\n");
	}
}
