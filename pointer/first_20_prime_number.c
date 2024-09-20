#include<stdio.h>
int main()
{
	int j,prime,c;
	for(j=1;j>=1;j++)
	{
		prime=isprime(j);
		if(prime==1)
		{
			printf("%d\n",j);
			c++;
		}
		if(c==20)
		break;	
	}
}

isprime(int n)
{
	int count=0,i;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	return 1;
	else
	return 0;
}
