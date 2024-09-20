#include <stdio.h>
int main()
{
    int a[10][10], r, c, i, j, t[10][10];
    printf("Enter the Row and Column number:\n");
    scanf("%d%d", &r, &c);
    if (r != c)
    {
        return 0;
    }
    printf("Enter the data\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix are...\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    // transpose the original matrix a
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            t[j][i] = a[i][j];
        }
        printf("\n");
    }
    // print transpose matrix
    printf("The transpose matrix are...\n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
    int k;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if(a[i][j]==t[i][j])
            {
            	 k++;
			}
        }
    }
    printf("\nk=%d",k);
    if(k==r*r)
    {
    	printf("It is symmetric");
	}
	else
	{
		printf("Not symmetric");
	}
}

