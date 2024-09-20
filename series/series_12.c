#include<stdio.h>
int main()
{
	int n,sum=0,i;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=3;i<=n;i=i+3)
	{
		sum=sum+i;
	}
	printf("%d",sum);
}
