#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n");
	scanf("%d",&n);
//	int fact=factorial(n);
//	printf("%d",fact);
		factorial(n);
}
 int factorial(int n)
 {
// 	int fact;
// 	if(n==1||n==0)
// 	{
// 		return 1;
//	}
// 	else
// 	{
// 		fact=n*factorial(n-1);
// 		return fact;
//	 }
//	if(n==0)
//	return;
//	printf("%d\n",n);
//	factorial(n-1);
	if(n>0)
	{
	factorial(n-1);
	printf("%d\n",n);
	}
 }
