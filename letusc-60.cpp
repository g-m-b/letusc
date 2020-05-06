#include<stdio.h>
int sum_non(int num)
{
	int rem,sum=0;
	while(num)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("Sum is %d",sum);
}
int sum(int num)
{
	if(num==0)
       return 0;
    else
        return (num%10+sum(num/10));
    
}
int main()
{
	int num,res;
	printf("Enter the number :");
	scanf("%d",&num);
	sum_non(num);
	res=sum(num);
	printf("\nSum is %d",res);
}
