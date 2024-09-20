#include<stdio.h>
int isprime(int);
int main()
{
	int start,end,i;
	printf("Enter the starting range:");
	scanf("%d",&start);
	printf("Enter ending range:");
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
	int f=0,i;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			f++;
			
		}
	}
	if(f==2)
	return 1;
}
