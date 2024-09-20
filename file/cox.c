#include<stdio.h>
#define PI 3.1415
int main()
{
	int n,i;
	float x;
	printf("Ente rthe value of x in degree");
	scanf("%f",&x);
	printf("Enter the number of term:");
	scanf("%d",&n);
	 x=x*PI/180;
	float term=1.0;
	float sum=1.0;
	int sign=-1;
	for(i=1;i<=n;i++)
	{
		term *= (x * x) / (2 * i * (2 * i - 1));
		sum=sum+sign*term;
		sign=-sign;
	}
	printf("cox(%f)=%f",x,sum);
	
	
}
