#include<stdio.h>
#include<stdlib.h>
struct students
   {
	char name[200];
	int	age;
	float result;
   };typedef struct students miri;
   void Display();
int main()
{
	miri *ptr;
	int i,n;
	printf("Enter the student list:");
	scanf("%d",&n);
	fflush(stdin);
	ptr=(miri*)malloc(n*sizeof(miri));
	for(i=0;i<n;i++)
	{
		printf("\n\nEnter the record for student %d",i+1);
		printf("\nNAME:");
		scanf("%[^\n]s",ptr[i].name);
		printf("AGE:");
		scanf("%d",&ptr[i].age);
		printf("RESULT:");
		scanf("%f",&ptr[i].result);
		fflush(stdin);
	}
	printf("\nAGE\tRESULT\tNAME\n");
	for(i=0;i<n;i++)
	{
	Display(ptr[i]);		
	}
	////////
	int max=0;
	for(i=0;i<n;i++)
	{
		if(ptr[i].result>ptr[max].result)
		{
			max=i;
		}
	}
	printf("\nThe highest mark obtained studnet is:");
	printf("\nAGE\tRESULT\tNAME\n");
	printf("%d\t%.2f\t%s\n",ptr[max].age,ptr[max].result,ptr[max].name);
	////
	int min=0;
	for(i=0;i<n;i++)
	{
		if(ptr[i].result<ptr[max].result)
		{
			min=i;
		}
	}
	printf("\nThe lowest mark obtained studnet is:");
	printf("\nAGE\tRESULT\tNAME\n");
	printf("%d\t%.2f\t%s\n",ptr[min].age,ptr[min].result,ptr[min].name);
	////
	int key;
	printf("\nEnter the roll number for search:");
	scanf("%d",&key);
	int flag=0;
	for(i=0;i<n;i++)
	{
		if(ptr[i].age==key)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
	printf("\nThe search age  studnet is:");
	printf("\nAGE\tRESULT\tNAME\n");
	printf("%d\t%.2f\t%s\n",ptr[i].age,ptr[i].result,ptr[i].name);
	}
	else
	printf("value not founded");
	
}

void Display(miri e1)
{
	printf("%d\t%.2f\t%s\n",e1.age,e1.result,e1.name);
}
