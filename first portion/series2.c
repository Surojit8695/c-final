#include<stdio.h>
int main()
{
	int n,i;
	float sum=0,mul=1,j;
	printf("Enter the number(N)");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(1.0/factor(i));
	}
	printf("%f",sum);
}
int factor(int n)
{
	int fact=1,i;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
