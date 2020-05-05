#include<stdio.h>
int main()
{
	int n,res,i;
	printf("Enter the number :");
	scanf("%d",&n);
	printf("Table of %d :",n);
	for(i=1;i<=10;i++)
	{
		res=n*i;
		printf("\n%d * %d = %d\n",n,i,res);
	}
	
}
