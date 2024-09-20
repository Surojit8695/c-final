#include<stdio.h>
int main()
{
	int n1,n2,i,count=0;
	printf("enter thr first number: ");
	scanf("%d",&n1);
	printf("enter thr second number: ");
	scanf("%d",&n2);
	if(n1-n2==2||n1-n1==-2){
		
		for(i=1;i<=n1;i++){
			if(n1%i==0)
		    	count=count+1;
		}
		if(count==2){
			
		  	count=0;
			for(i=1;i<=n2;i++){
				if(n2%i==0)
			    	count=count+1;
			}
			if(count==2)
		 	    printf("Twin prime numbers"); 
			else
		     	printf(" Not Twin prime numbers");
		    }
		  else{
		       printf("not a twin prime number");
		    }
		}
	}
	 
	else{
		printf("Not a twin prime number");
	}
}

