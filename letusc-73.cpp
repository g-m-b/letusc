#include<stdio.h>
int pn(int arr[])
{
	int count1=0,count2=0;
	for(int i=0;i<25;i++)
	{
		if(arr[i]>0)
		{
			count1=count1+1;
		}
		else if(arr[i]<0)
		{
			count2=count2+1;
		}
	}
	printf("Positive elements are %d\n",count1);
	printf("negative elements are %d\n",count2);
}
int od(int arr[])
{
	int count1=0,count2=0;
	for(int i=0;i<25;i++)
	{
		if(arr[i]%2==0)
		{
			count1=count1+1;
		}
		else if(arr[i]%2==1)
		{
			count2=count2+1;
		}
	}
	printf("even elements are %d\n",count1);
	printf("odd elements are %d\n",count2);
}
int main()
{
	int arr[25];
	printf("Enter the elements:");
	for(int i=0;i<25;i++)
	   scanf("\n%d",&arr[i]);
    pn(arr);
	od(arr);	
}

