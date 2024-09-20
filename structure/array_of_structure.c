#include<stdio.h>
struct students{
	char name[100];
	int age;
	float result;
};
typedef struct students student;
int main()
{
	student s[100];
	int n,i;
	printf("Enter the student detials you want to add::");
	scanf("%d",&n);
	fflush(stdin);
	for(i=0;i<n;i++)
	{
		printf("\n\nNAME:");
		scanf("%[^\n]s",s[i].name);
		printf("AGE:");
		scanf("%d",&s[i].age);
		printf("RESULT:");
		scanf("%f",&s[i].result);
		fflush(stdin);
	}
	printf("\n\nAGE\tRESULT\tNAME\n");	
	for(i=0;i<n;i++)
	{
		printf("%d\t%.2f\t%s\n",s[i].age,s[i].result,s[i].name);	
	}
	
}
