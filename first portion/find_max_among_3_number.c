#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the 3 number:");
	scanf("%d%d%d",&a,&b,&c);
	//condition check
	if(a==b&&b==c){
		printf("All numbers are equal");
	}
	else{
		if(a>b){
			if(a>c){
				printf("a is big");
			}
			else{
				printf("c is big");
			}
		}
		else{
			if(b>c){
				printf("b is big");
			}
			else{
				printf("c is big");
			}	
		}
	}
}
