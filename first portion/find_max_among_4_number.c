//find max among 4 number
#include<stdio.h>
int main()
{
	while(1){
	int a,b,c,d;
	int max;
	printf("\nEnter the 4 number:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	//condition check
	if(a==b&&b==c&&c==d){
		printf("All numbers are equal");
	}
	else{
		if(a>b){
			if(a>c){
				if(a>d){
					printf("%d is big",a);
				}
				else{
					printf("%d is big",d);
				}
			}
			else{
				if(c>d){
					printf("%d is big",c);
				}
				else{
					printf("%d is big",d);
				}
			}	
		}
		else{
			if(b>c){
				if(b>d){
				printf("%d is big",b);	
				}
				else{
					printf("%d is big",d);
				}
			}
			else{
				if(c>d){
					printf("%d is big",c);
				}
				else{
					printf("%d is big",d);
				}
			}
		}
	}
}
}
