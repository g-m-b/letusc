#include<stdio.h>
int main()
{
	int arr[100],i,j;
	for(i=0;i<100;i++)
	{
		arr[i]=i+1;
	}
	printf("------Implementing eratrone's sieve-------\n");
	for(i==2;i<100;i++)
	{
		for(j=2;j<arr[i];j++)
		{
			if(arr[i]%j==0)
			{
				arr[i]=0;
			}
		}
	}
	for(i=arr[0];i<100;i++)
	{
		printf("%3d\t",arr[i]);
	}
	printf("\n Prime numbers are :\n");
	for(i=arr[0];i<100;i++)
	{
		if(arr[i]!=0)
		   printf("%3d\t",arr[i]);
	}
	
}
