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
	if(n==0)
	return ;
	printf("%2d \n",n);
	forloop(n-1);
}
