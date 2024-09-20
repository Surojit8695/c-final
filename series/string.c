#include<stdio.h>
void xstrcpy(char a[],char b[]);
int main()
{
	char s1[100],s2[100];
	printf("Enter the string");
	scanf("%[^\n]s",&s1);
	fflush(stdin);
	printf("Enter the 2nd string");
	scanf("%[^\n]s",&s2);
	xstrcpy(s1,s2);	
	printf("%s",s1);
}
void xstrcpy(char s1[],char s2[])
{
	int i;
	for(i=0;s2[i]!='\0';i++)
	{
		s1[i]=s2[i];
	}
	s1[i]='\0';
}
