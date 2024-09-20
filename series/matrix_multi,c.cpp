#include<stdio.h>
int main()
{
	int a[10][10], b[10][10], c[10][10], r1, c1, r2, c2, i, j, k;
    printf("Enter the Row and Column number for A matrix:\n");
    scanf("%d%d", &r1, &c1);
    printf("Enter the Row and Column number for B matrix:\n");
    scanf("%d%d", &r2, &c2);
    if (r1 == c2)
    {
        printf("Enter the data for A matrix\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("a[%d][%d]=", i, j);
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter the data for B matrix\n");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("a[%d][%d]=", i, j);
                scanf("%d", &b[i][j]);
            }
        }
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                int sum=0;
                for (k = 0; k < r1; k++)
                {
                    sum = sum+ (a[i][k] * b[k][j]);
                }
                c[i][j]=sum;
            }
        }
        printf("The multiplexian of A and B matrix is\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
}
