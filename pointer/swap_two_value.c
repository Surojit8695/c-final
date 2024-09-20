#include<stdio.h>
void swap(int*,int*);
int main()
{
	int x,y;
	printf("Enter x and y:");
	scanf("%d%d",&x,&y);
	printf("Before swap x=%d and y=%d\n",x,y);
	swap(&x,&y);
//	int z;
//	z=x;
//	x=y;
//	y=z;
	printf("After swap x=%d and y=%d\n",x,y);
}
void swap(int *x,int *y)
{
	int z;
	z=*x;
	*x=*y;
	*y=z;
}
