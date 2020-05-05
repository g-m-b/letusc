#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year :");
	scanf("%d",&year);
	if(year%4==0 && year%400==0)
	{
		printf("%d is the leap year",year);
	}
	else
	{
		printf("%d is not an leap year",year);
	}
}
