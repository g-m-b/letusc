#include<stdio.h>
int fact(int a)
{
	int f;
	if(a==1)
	{
		return 1;
	}
	else
	   f=a*fact(a-1);
	return f;
}
int main()
{
	int i,x;
	printf("Enter the number :");
    scanf("%d",&i);
	x=fact(i);
	printf("Factorial of number is %d",x);	
}

