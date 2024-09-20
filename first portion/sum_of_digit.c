#include<stdio.h>
#include<math.h>
int Isarmstrong(int);
int main()
{
	int n,rock;
	printf("Enter any positive number:");
	scanf("%d",&n);
	rock=Isarmstrong(n);
	if(rock==n)
	printf("armstrong");
	else
	printf("not armstrong");
	
}
int Isarmstrong(int temp){
	int rem,sum=0,count=0;
	int k=temp;
	while(k>0){
		k=k/10;
		count++;
	}
	while(temp>0){
		rem=temp%10;
		sum=sum+pow(rem,count);
		temp=temp/10;
	}
	return sum;
}

