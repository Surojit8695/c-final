#include<stdio.h>
int main()
{
	int a,b,c,max,equal;
	printf("Enter the 3 number:");
	scanf("%d%d%d",&a,&b,&c);
	//condition check
	max=(a==b&&b==c?(equal):(a>b&&a>c)?(a):(b>c)?(b):(c));
	if(max==equal)
	printf("all are equal");
	else
	printf("%d is maximum",max);
}
