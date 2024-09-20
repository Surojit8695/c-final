#include<stdio.h>
int islcm(int,int );
int main()
{
	int a1,b1,gcd,lcm;
	printf("Enter two number:");
	scanf("%d%d",&a1,&b1);
	lcm=islcm(a1,b1);
	printf("lcm=%d",lcm);
}
int islcm(int n1,int n2)
{
	int max;
	max=(n1>n2)?n1:n2;
	while(1)
	{
		if(max%n1==0&&max%n2==0)//a=12,b=18
		{
		return max;
		}
		max++;
		printf("%d ",max);//run this code for better understanding
	}
}
