#include<stdio.h>
int main()
{
	float x;
	int n,i;
	printf("Enter the value of x");
	scanf("%f",&x);
	printf("Enter the value of n");
	scanf("%d",&n);
	//degree to radian convertion
	x=(x*3.1415)/180;
	float sum=1.0,term=1.0;
	int sign=-1;
	for(i=1;i<n;i++)
	{
		term=term*x*x/(2 * i* (2 * i-1));//define each term of the series
		sum=sum+sign*term;
		sign=-sign;
	}
	printf("cos(%f)=%f",x,sum);
}
