#include<stdio.h>
int main()
{
	FILE *file;//name of the file
	file=fopen("contact.txt","a");
	if(file==NULL)
	{
		printf("file does not exixt");
	}
	else
	{
		char name[200];
		char phone[200];
		char email[200];
		printf("Enter the name:");
		fgets(name,sizeof name,stdin);
		printf("Enter the name:");
		fgets(phone,sizeof phone,stdin);
		printf("Enter the name:");
		fgets(email,sizeof email,stdin);
		//write to the file
		fprintf(file,"%s%s%s\n",name,phone,email);
		
		fclose(file);
	}
	
}
