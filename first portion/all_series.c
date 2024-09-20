#include<stdio.h>
int main()
{
	int n,i;
	float sum=0,mul=1;
	printf("Enter the number(N)");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
//		sum=sum+i;
//		sum=sum+i*4;
//		sum=sum+i*2;
//		sum=sum+i*i;
//		sum=(float)sum+1.0/i;
		sum=(float)sum+(i/5.0);
////////////////////////
//		mul=mul*i;
//		mul=mul*i*2;//1to N product of even number
//		mul=mul*i;//
//		mul=mul*i/5;
	}
	printf("%f\n\n\n",sum);
	printf("%f",mul);
}
