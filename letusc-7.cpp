#include<stdio.h>
int main()
{
	int num,sum=0;
	int rem=0;
	printf("Enter the five digit number :");
	scanf("%d",&num);
	while(num)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("The sum is %d",sum);
}
