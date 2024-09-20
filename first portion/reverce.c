#include<stdio.h>
int isreverce(int);
int main()
{
	int n,rev;
	printf("enter the number");
	scanf("%d",&n);
	rev=isreverce(n);
	printf("reverce of number is %d",rev);
	if(rev==n)
	printf("\npalindrome");
	else
	printf("\nnot palindrome");

}
int isreverce(int temp)
{
	int sum=0,rem;
	while(temp>0){
		rem=temp%10;
		sum=sum*10+rem;
		temp=temp/10;
	}
	return sum;
}
