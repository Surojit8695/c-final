#include <stdio.h>
int main()
{
    int a[10][10], r, c, i, j;
    int d[10][10];
    printf("Enter the Row and Column number:\n");
    scanf("%d%d", &r, &c);
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
    // transpose matrix condition
    printf("The transpose matrix are...\n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            d[j][i] = a[i][j];
        }
        printf("\n");
    }
    printf("The Transpose matrix are...\n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("%d ", d[i][j]);
        }
        printf("\n");
    }
}
