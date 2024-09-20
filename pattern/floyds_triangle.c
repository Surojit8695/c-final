#include<stdio.h>
int main()
{
	int n; 
	int row,col,i=1;
	printf("Enter the row(n)");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("%d ",i);
			i=i+1;
		}
		printf("\n");
	}
}
