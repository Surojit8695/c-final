//sin series
#include<stdio.h>
#define PI 3.14159
int main()
{
	int i,n;
	float x,sum,t,f;
	printf("Enter the value of x in degree:");
	scanf("%f",&x);
	printf("Enter the value of n:");
	scanf("%d",&n);
	f=x*PI/180;
	t=1;
	sum=1;
	for(i=1;i<=n;i++)
	{
		t=(t*(-1)*f*f)/(2*i*(2*i-1));
		sum=sum+t;
	}
	printf("cos(%.2f)=%.4f",x,sum);
}
