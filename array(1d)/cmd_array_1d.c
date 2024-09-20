#include<stdio.h>
void display(int a[],int size);
void insert(int a[],int size);
int linearsearch(int a[],int size,int key);
int binarysearch(int a[],int size,int key);
void bubbleshort(int a[],int size);
int main( int argc,char *argv[])
{
	int n,result,key;
	int a[100];
	printf("Enter the number of data");
//	n=atoi(argv[2]);
	scanf("%d",&n);
	printf("Enter the data:\n");
	insert(a,n);
	printf("The data are\n");
	display(a,n);
	printf("After shorting the array are..\n");
	bubbleshort(a,n);
	display(a,n);
	printf("Enter the search value:");
	scanf("%d",&key);
//	result=linearsearch(a,n,key);
//	if(result>=0)
//	printf("%d is found at position %d",key,result);
//	else
//	printf("value not founded");
	result=binarysearch(a,n,key);
	if(result>=0)
	{
		printf("%d is found at position %d",key,result);
	}
	else
	{
		printf("value not founded");
	}
}
void insert(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
}
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
}
int linearsearch(int a[],int n,int key)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			return i;
			break;
		}
	}
	return -1;	
}
int binarysearch(int a[],int n,int key)
{
	int high=n-1,low=0,mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==key)
		{
			return mid;
		}
		else if(a[mid]<key)
		{
			low=mid+1;
		}
		else
		high=mid-1;
	}
	return -1;
}
void bubbleshort(int a[],int n)
{
	int t,i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
}
