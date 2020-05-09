#include<stdio.h>
int main()
{
	int arr[100],n,c=0,i;
	printf("Enter the number of elements :");
	scanf("%d",&n);
	printf("Enter the elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]==arr[n-(i+1)])
		{
			printf("\n%d\t%d",i,arr[i]);
			c=c+1;
		}
	}
	if(c==0)
	{
		printf("No such elements");
	}
}
