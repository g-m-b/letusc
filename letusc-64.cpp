#include<stdio.h>
int nat(int x)
{
	int sum;
	if (x==1)
	    return 1;
	else
	{
	   sum=sum+nat(x-1);
	   return sum;	
	}
	   
}
int main()
{
	int x,y;
	printf("Enter the number of natural numbers :");
	scanf("%d",&y);
	x=nat(y);
	printf("Sum is %d",x);
}

