#include<stdio.h>
int search(int arr[],int n)
{
	int count=0;
	for(int i=0;i<25;i++)
	{
		if(arr[i]==n)
		    {
		    	printf("%d\n",i);
				count=count+1;
			}
	}
	printf("\n%d",count);
}
int main()
{
	int arr[25],n;
	printf("Enter the 25 numbers :");
	for(int i=0;i<25;i++)
	{
		scanf("\n%d",&arr[i]);
	}
	printf("Enter the number to be searched :");
	scanf("%d",&n);
	search(arr,n);
}

