#include<stdio.h>
int modify(int arr[10])
{
	int i;
	for(i=0;i<10;i++)
	{
		arr[i]=arr[i]*3;
	}
	return arr[i];
}
int main()
{
	int arr[10],i;
	printf("Enter the elements :");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	modify(arr);
	printf("------After modification------");
	for(i=0;i<10;i++)
	{
		printf("%d\t",arr[i]);
	}
}

