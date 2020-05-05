#include<stdio.h>
int main()
{
	int num,sum=0,last,first;
	printf("Enter the number :");
	scanf("%d",&num);
	last=num%10;
	first=num;
	while(num>=10)
	{
		num=num/10;
	}
	first=num;
	sum=first+last;
	printf("The sum of first and lasst digit is %d",sum);
}
