#include<stdio.h>
int main()
{
	int n,arr[20],*p,*s,i;
	printf("Enter the number of elements :");
	scanf("%d",&n);
	printf("Enter the elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	p=&arr[0];
	for(i=1;i<n;i++)
	{
		s=&arr[i];
		if(*p>*s)
		{
			*p=*s;
			s++;
		}
	}
	printf("SMALLEST IN ARRAY : %d",*p);
}
