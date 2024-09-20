#include<stdio.h>
int main()
{
	while(1){
			int a,b,c,d,e;
	int max;
	printf("\nEnter the 5 number:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	//condition check
	if(a==b&&b==c&&c==d&&d==e){
		printf("all numbers are equal");
	}
	else{
		if(a>b){
			if(a>c){
				if(a>d){
					if(a>e){
						printf("%d is big",a);
					}
					else{
						printf("%d is big",e);
					}
				}
				else{
					if(d>e){
						printf("%d is big",d);
					}
					else{
						printf("%d is big",e);
					}
				}
				
			}
			else{
				if(c>d){
					if(c>e){
						printf("%d is big",c);
					}
					else{
						printf("%d is big",e);
					}
				}
				else{
					if(d>e){
						printf("%d is big",d);
					}
					else{
						printf("%d is big",e);
					}
				}
				
			}
			
		}
		else{
			if(b>c){
				if(b>d){
					if(b>e){
						printf("%d is big",b);
					}
					else{
						printf("%d is big",e);
					}
				}
				else{
					if(d>e){
						printf("%d is big",d);
					}
					else{
						printf("%d is big",e);
					}
				}
			}
			else{
				if(c>d){
					if(c>e){
						printf("%d is big",c);
					}
					else{
						printf("%d is big",e);
					}
				}
				else{
					if(d>e){
						printf("%d is big",d);
					}
					else{
						printf("%d is big",e);
					}
				}
			}
		}
	}
	}
}
