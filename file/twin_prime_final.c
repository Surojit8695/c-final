#include<stdio.h>
int main()
{
	int start,end,i;
	printf("Enter the starting range:");
	scanf("%d",&start);
	printf("Enter the ending range:");
	scanf("%d",&end);
	if(start<=1)
	{
		start=2;
	}
	
	for(i=start;i<=end;i++)
	{
		if(isprime(i)==1&&isprime(i+2)==1)
		{
			printf("%d %d\n",i,i+2);
		}
		
	}
	
}
int isprime(int n)
{
	int i,f=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			f=1;
			break;
		}
	}
	if(f==0)
	return 1;
	else
	return 0;
}
