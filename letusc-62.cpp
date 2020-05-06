#include<stdio.h>
int fib(int num)
{
	if (num==0)
	    return 0;
	else if (num==1)
	    return 1;
	else  
	   return fib(num-1)+fib(num-2);
}
int main()
{
	int num,res;
	printf("Enter the number of sequence");
	scanf("%d",&num);
	for(int i=0;i<=num;i++)
	{
		res=fib(i);
	printf("\t%d",res);
	}
}

