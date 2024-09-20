#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n");
	scanf("%d",&n);
	float sum=0;
	int i;
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		sum=sum-(float)(1.0/i);
		else
		sum=sum+(float)(1.0/i);
	}
	printf("sum=%f",sum);
}
