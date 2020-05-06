#include<stdio.h>
int leap(int y);
int main()
{
	int year;
	printf("Enter the year:");
	scanf("%d",&year);
	printf("The year enter is %d\n",year);
	leap(year);
}
int leap(int y)
{
	if(y%4==0 && y%400==0)
	{
		printf("The year is leap year");
	}
	else
	    printf("The year is not a leap year");
}
