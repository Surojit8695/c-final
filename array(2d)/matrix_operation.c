#include<stdio.h>
void input(int a[100][100],int ,int);
void display(int a[100][100],int ,int);
int addition(int a[100][100],int b[100][100],int row,int col);
int subtraction(int a[100][100],int b[100][100],int row,int col);
int multiplexian(int a[100][100],int b[100][100],int row,int col);
void transpose(int a[100][100],int row,int col);
void symmetric(int a[100][100],int row,int col);
int main()
{
	int row,col,i,j,resalt;
	printf("Enter the row and the column\n");
	scanf("%d%d",&row,&col);
	int a[100][100],b[100][100];
	printf("\n\nEnter the data for A matrix\n\n");
	input(a,row,col);
	printf("\nMatrix A\n");
	display(a,row,col);
	printf("\n\nEnter the data for B matrix\n\n");
	input(b,row,col);
	printf("\nMatrix B\n");
	display(b,row,col);
	printf("\n\nThe addition is\n\n");
	addition(a,b,row,col);
	printf("\n\nThe subtraction is\n\n");
	subtraction(a,b,row,col);
	printf("\n\nThe multiplexian is\n\n");
	multiplexian(a,b,row,col);
	printf("\n\nThe transpose of a matrix\n\n");
	transpose(a,row,col);
	printf("\n\nThe transpose of b matrix\n\n");
	transpose(a,row,col);
}
void input(int a[100][100],int row,int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}

void display(int a[100][100],int row,int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
int addition(int a[100][100],int b[100][100],int row,int col)
{
	int i,j,c[100][100];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	display(c,row,col);
}
///function for subtraction
int subtraction(int a[100][100],int b[100][100],int row,int col)
{
	int i,j,c[100][100];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
		}
	}
	display(c,row,col);
}
//function for multiplexian
int multiplexian(int a[100][100],int b[100][100],int row,int col)
{
	int i,j,c[100][100],k;
	for(i=0;i<row;i++)//row=3x3
	{
		for(j=0;j<col;j++)
		{ int sum=0;
			for(k=0;k<col;k++)
			{
				sum=sum+a[i][k]*b[k][j];
			}
			c[i][j]=sum;
		}
	}
	display(c,row,col);
}
void transpose(int a[100][100],int row,int col)
{
	int i,j;
	int c[100][100];
	for(i=0;i<col;i++)
	{	
		for(j=0;j<row;j++)
		{
			c[i][j]=a[j][i];
		}
		printf("\n");
	}
	display(c,row,col);
}

