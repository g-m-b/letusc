#include<stdio.h>
int insertsort(int arr[],int n)
{
	int i,j,l;
	for(i=1;i<n;i++)
	{
		l=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>l)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=l;
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
	insertsort(arr,n);
	printf("The sortedd elements :\n");
	for(int j=0;j<n;j++)
	{
		printf("%d\t",arr[j]);
	}
}
