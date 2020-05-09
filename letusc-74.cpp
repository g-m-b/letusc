#include<stdio.h>
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int selectsort(int arr[],int n)
{
	int i,j,min;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		swap(&arr[min],&arr[i]);
	}
}
int main()
{
	int arr[20],n;
	printf("Enter the number of elements :");
	scanf("%d",&n);
	printf("Enter the elements :");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	selectsort(arr,n);
	printf("The sortedd elements :\n");
	for(int j=0;j<n;j++)
	{
		printf("%d\t",arr[j]);
	}
}
	
