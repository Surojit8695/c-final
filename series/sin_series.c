//sin series
#include<stdio.h>
#define PI 3.1415
int main()
{
	int i,n;
	float x,sum,t,f;
	printf("Enter the value of x in degree:");
	scanf("%f",&x);
	printf("Enter the value of n:");
	scanf("%d",&n);
	f=x*PI/180;
	t=f;
	sum=f;
	for(i=1;i<=n;i++)
	{
		t=(t*(-1)*f*f)/(2*i*(2*i+1));
		sum=sum+t;
	}
	printf("sin(%.2f)=%.5f",x,sum);
}
