#include<stdio.h>
void bubbleshort(int a[],int n);
int main()
{
	int a[20],n,i;
	printf("Enter he size of the array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("sum=%d\n",sum);
	int avg=sum/n;
	printf("%d\n",avg);
	int max=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>a[max])
		{
			max=i;
		}
	}
	printf("\nmax=%d",a[max]);
	
	int min=0,key=2;
	for(i=0;i<n;i++)
	{
		if(a[i]<a[min])
		{
			min=i;
		}
	}
	printf("\nmin=%d",a[min]);
//	int r=linearsearch(a,n,key);
	printf("\n\n");
	bubbleshort(a,n);
	printf("\nafter bubble short");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	
	int r=binarysearch(a,n,key);
	printf("%d is founded at pos %d",key,r);
}
//int linearsearch(int a[],int n,int key)
//{
//	int f=0,i;
//	for(i=0;i<n;i++)
//	{
//		if(a[i]==key)
//		{
//			f=1;
//			break;
//		}
//	}
//	if(f==1)
//	printf("\n%d is founded at position %d",key,i);
//}
void bubbleshort(int a[],int n)
{
	int temp,i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
//
int binarysearch(int a[],int n,int key)
{
	int high=n-1,low=0,mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key==a[mid])
		return mid;
		else if(key>a[mid])
		low=mid+1;
		else
		high=mid-1;	
	}
	
}
