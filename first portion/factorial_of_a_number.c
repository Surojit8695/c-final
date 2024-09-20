#include<stdio.h>
int main()
{
	int fact=1,i;
    int n;
	do{
	printf("Enter any positive the number:");
	scanf("%d",&n);
	}while(n<0);
	for(i=1;i<=n;i++){
		
		fact=fact*i;
	}
	printf("factorial of %d is %d",n,fact);
}
