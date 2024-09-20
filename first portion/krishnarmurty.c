#include<stdio.h>
#include<math.h>
int krishnamurthy(int);
int main()
{
	int n,rock;
	printf("Enter any positive number:");
	scanf("%d",&n);
	rock=krishnamurthy(n);
	if(rock==n)
	printf("krishnamurthy");
	else
	printf("not krishnamurthy");
	
}
int krishnamurthy(int temp){
	int rem,sum=0,fact,i;
	while(temp>0){
		rem=temp%10;
		for(fact=1,i=1;i<=rem;i++){
		fact=fact*i;
			}
		sum=sum+fact;
		temp=temp/10;
	}
	return sum;
}

