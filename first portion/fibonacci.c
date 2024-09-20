#include<stdio.h>
int isprime(int);
int main()
{
	int start=0,end=1,fib,i,n;
	printf("Enter the range:");
	scanf("%d",&n);
	isfibonacci(n);
//	for(i=start;start<=n;i++)
//	{
//		fib=start+end;
//		printf("%d ",start);
//		start=end;
//		end=fib;
//	}
//	for(i=1;i<=n;i++)
//	{
//		fib=start+end;
//		printf("%d ",start);
//		start=end;
//		end=fib;
//	}
}
int isfibonacci(int n)
{
	int start=0,end=1,fib,i;
	for(i=start;start<=n;i++)
	{
		fib=start+end;
//		printf("%d ",start);
		int s=isprime(start);
		if(s==2)
		printf("%d ",start);
		start=end;
		end=fib;
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
