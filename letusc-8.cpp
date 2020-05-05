#include<stdio.h>
int main()
{
	int num,rev=0;
	int rem=0;
	printf("Enter the number :");
	scanf("%d",&num);
	while(num)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("The reverse of number is %d",rev);
}
