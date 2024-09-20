#include<stdio.h>
int main()
{
	int i,count=0;
	char str[100];
	printf("Enter the string");
	scanf("%[^\n]s",&str);
	printf("The string are:");
//	printf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		printf("%c",str[i]);
		count++;
	}
	printf("there are %d character ",count);
}
