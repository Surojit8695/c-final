#include<stdio.h>
int main()
{
	int n;
	int row,col;
	printf("Enter the row:");
	scanf("%d",&n);
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
//			printf("* ");//*,**,***
//			printf("$ ");
//			printf("# ");
//			printf("%d ",col%2);
		}
		printf("\n");
	}
}
