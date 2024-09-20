#include<stdio.h>
int main()
{
	int a1,b1,gcd,lcm;
	printf("Enter two number:");
	scanf("%d%d",&a1,&b1);//a=1025,b=35;
	int a=a1;int b=b1;
	while(b>0){
		gcd=a%b;
		a=b;
		b=gcd;
	}
	printf("gcd=%d",a);
	lcm=(a1*b1)/a;
	printf("\nlcm=%d",lcm);
}
