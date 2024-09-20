#include<stdio.h>
void forloop(int);
int main()
{
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	forloop(n);
}
void forloop(int n)
{
	if(n!=0)
	{
	forloop(n-1);
	printf("%d \n",n);
	}
	
}
