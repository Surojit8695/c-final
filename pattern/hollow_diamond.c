#include<stdio.h>
int main()
{
	int n,row,col,k;
	printf("Enter any odd number of row");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		row<=n?k++:k--;
		for(col=1;col<=n;col++)
		{
			if(col<=n-k||col>=n+k)
			{
				printf("*");
			}
			
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	
}
