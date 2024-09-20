#include <stdio.h>//
int main()
{
    int a[10][10], r, c, i, j;
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
    //print the matrix
    printf("The matrix are...\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
//    int k=0,nondiagonalsum=0;
//    for (i = 0; i < r; i++)
//    {
//        for (j = 0; j < c; j++)
//        {
//            if(i==j)
//            {
//            	k=k+a[i][j]; //k=diagonal sum
//			}
//			else if(i!=j)
//			{
//				nondiagonalsum+=a[i][j];
//			}
//        }
//    }
//    if(nondiagonalsum==0&&k==r)
//    {
//    	printf("This is an idenety matrix");
//	}
//	else
//	{
//		printf("This is not a identy Matrix");
//	}

//method 2
int flag=0;
	for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if((i==j&&a[i][j]==1)&&(i!=j&&a[i][j]==0))
            {
            	flag==1;
            	break;
			}
			
        }
    }
    if(flag==1)
    printf("identity matrix");
}

