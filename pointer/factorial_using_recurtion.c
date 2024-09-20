#include<stdio.h>
int factor(int);
int main()
{
	int fact,n;
	printf("Enter the number");
	scanf("%d",&n);
	fact=factor(n);
	printf("Factorial of %d is %d",n,fact);
}
int factor(int n)
{
	int fact;
	if(n==1||n==0)
	{
		return 1;
	}
	else
	{
		fact=n*factor(n-1);
		return fact;
	}
}
