#include<stdio.h>
int isperfect(int);
int main()
{
	int n,rock;
	printf("Enter any positive number:");
	scanf("%d",&n);
	rock=isperfect(n);
	if(rock==n)
	printf("perfect number");
	else
	printf("not perfect number");
}
int isperfect(int temp)
{
	int sum=0,i;
	for(i=1;i<temp;i++)
	{
		if(temp%i==0)
		{
			sum=sum+i;
		}
	}
	return sum;
}
