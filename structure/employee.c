#include<stdio.h>
struct Emoloyee {
	char name[200];
	int age;
	float salary;
};
typedef struct Emoloyee miri;
void printfdetials(miri e1)
{
	printf("\nname=%s",e1.name);
	printf("\nage=%d",e1.age);
	printf("\nsalary=%f",e1.salary);
}
int main()
{
	miri e1;
	printf("Enter the detials for employee number 1:\n");
	e1=getdetials();
	 printfdetials(e1);
}
miri getdetials(miri e1)
{
	printf("Enter name of 1st employee:");
	scanf("%[^\n]s",&e1.name);
	printf("Enter age of 1st employee:");
	scanf("%d",&e1.age);
	printf("Enter salary of 1st employee:");
	scanf("%f",&e1.salary);
	return e1;
}
