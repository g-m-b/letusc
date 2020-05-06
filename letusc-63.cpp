#include<stdio.h>
int binary(int num)
{
	if(num==0)
	    return 0;
	else
	   return (num % 2) + 10 * binary(num / 2);
}
int main()
{
	int num,bin;
	printf("Enter the number :");
	scanf("%d",&num);
	bin=binary(num);
	printf("Binary of % d id %d",num,bin);
}

