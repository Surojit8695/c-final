#include<stdio.h>
#include<stdlib.h>
void input(int**,int,int);
void display(int**,int,int);
int main()
{
	int **a;
	int row,col,i;
	printf("Enter the row and the col:");
	scanf("%d%d",&row,&col);
	a=(int**)malloc(row*sizeof(int*));
	for(i=0;i<row;i++)
	{
		a[i]=(int*)malloc(col*sizeof(int));
	}
	input(a,row,col);
	display(a,row,col);
}
void input(int **a,int row,int col)
{
	int i,j;
	printf("\nEnter the data for  matrix\n");
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                printf("a[%d][%d]=", i, j);
                scanf("%d", &a[i][j]);
            }
        }
}
void display(int **a,int row,int col)
{
	int i,j;
	printf("\nEnter the data for  matrix\n");
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                printf("%d",a[i][j]);
            }
            printf("\n");
        }
}
