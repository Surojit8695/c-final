#include<stdio.h>
int main()
{
	int n,row,col;
	printf("Enter the row:");
	scanf("%d",&n);
	for(row=n;row>=1;row--)
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
