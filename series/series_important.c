#include<stdio.h>
#include<math.h>
int main()
{
	float n,x,sum=0,fact=1,i,j;
	printf("Enter the value of x");
	scanf("%f",&x);
	printf("Enter the value of n");
	scanf("%f",&n);
	for(i=1;i<=n;i++)//n=5
	{	
			fact=fact*i;
			sum=sum+(pow(x,i)/fact);		
	}
	printf("Sum=%f",sum);
}
