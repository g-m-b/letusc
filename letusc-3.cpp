#include<stdio.h>
int main()
{
	int arr[5];
	float avg;
	printf("Enter the marks:");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int j=0;j<5;j++)
	{
		if(arr[j]>0 && arr[j]<=100)
		{
		 avg+=arr[j];
		 avg=avg/5;
	     }
	} 
	printf("%f",avg);
}
