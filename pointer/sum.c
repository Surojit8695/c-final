#include<stdio.h>
int main()
{
	int fib,a=18,b=18,i,range,max,p;
	max=lslcm(a,b);
	printf("lcm=%d",max);
	
	
//	printf("Enter the number:");
//	scanf("%d",&range);
//	temp=n;
//	k=n;
////	while(k!=0)
////	{
////		k=k/10;
////		count++;
////	}
//	while(temp!=0)
//	{
//		rem=temp%10;
//		for(fact=1,i=1;i<=rem;i++)
//		{
//			fact=fact*i;
//		}
//		sum=sum+fact;
//		temp=temp/10;
//	}
//	printf("\n%d",sum);
//	if(sum==n)
//	printf("krishnamurti");
//	else
//	printf("not krishnamurti");
//////////////////////////////////////////////////////////
//	for(i=1;i<=n;i++)
//	{
//		if(n%i==0)
//		{
//			sum=sum+i;
//			count++;
//		}
//	}
//	if(count==2)
//	printf("prime number");
//	else
//	printf(" not prime number");
/////////////////////////////
//while(b!=0)
//{
//	fib=a%b;
//	a=b;
//	b=fib;
//}
//printf("gcd=%d\n",a);
////////////
	
}
int isprime(int n)

{
	int i,count=0;
		for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
//			sum=sum+i;
			count++;
		}
	}
	return count;
}
int lslcm(int a,int b)
{
	int max;
	max=a>b?a:b;
	while(1)
	{
		if(max%a==0&&max%b==0)
		{
			return max;
		}
		max++;
	}
}
