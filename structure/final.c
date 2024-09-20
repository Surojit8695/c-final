#include<stdio.h>
#include<stdlib.h>
struct students{
	char name[50];
	int roll;
	float marks;
};typedef struct students student;
void swap(student *s1 ,student *s2);
int main()
{
	student *ptr;
	int i,n;
	printf("Enter the student list:");
	scanf("%d",&n);
	fflush(stdin);
	ptr=(student*)malloc(n*sizeof(student));
	for(i=0;i<n;i++)
	{
		printf("\n\nEnter the record for student %d",i+1);
		printf("\nNAME:");
		scanf("%[^\n]s",ptr[i].name);
		printf("AGE:");
		scanf("%d",&ptr[i].roll);
		printf("MARKS:");
		scanf("%f",&ptr[i].marks);
		fflush(stdin);
	}
	printf("\nROLL\tMARKS\tNAME\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%.2f\t%s\n",ptr[i].roll,ptr[i].marks,ptr[i].name);
	}
	int j;
	student temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(ptr[j].marks>ptr[j+1].marks)
			{
				temp=ptr[j];
				ptr[j]=ptr[j+1];
				ptr[j+1]=temp;
//				swap(&ptr[j],&ptr[j+1]);
			}
		}
	}
	printf("\n AFTER SHORTIG ON BESIS OF MARKS\n");
	printf("\nROLL\tMARKS\tNAME\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%.2f\t%s\n",ptr[i].roll,ptr[i].marks,ptr[i].name);
	}
	
	
}
void swap(student *s1 ,student *s2)
{
	student temp=*s1;
	*s1=*s2;
	*s2=temp;
}
//void Display(student e1)
//{
//	printf("%d\t%.2f\t%s\n",e1.roll,e1.);
//}
