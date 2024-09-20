#include<stdio.h>
int isprime(int);
int main()
{
	int start,end,sum,i;
	printf("Enter starting number:");
	scanf("%d",&start);
	printf("Enter ending number:");
	scanf("%d",&end);
	for(i=start;i<=end;i++)
	{
		sum=isprime(i);
		if(sum==2)
		printf("\n%d",i);
	}
}
int isprime(int temp)
{
	int sum=0,i;
	for(i=1;i<=temp;i++)
	{
		if(temp%i==0)
		{
			sum++;
		}
	}
	return sum;
}
