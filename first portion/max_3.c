#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("Enter the 3 number:");
	scanf("%d%d%d",&a,&b,&c);
	//condition check
	if(a>b){
		if(a>c){
			max=a;
		}
		else{
			max=c;
		}
	}
	else{
		if(b>c){
			max=b;
		}
		else{
			max=c;
		}
	}
	printf("max=%d",max);
}
