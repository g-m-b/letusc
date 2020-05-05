#include<stdio.h>
int main()
{
	int angle1,angle2,angle3;
	int sum;
	printf("Enter the three angles:");
	scanf("%d",angle1);
	scanf("%d",angle2);
	scanf("%d",angle3);
	sum=angle1+angle2+angle3;
	if(sum==180)
	{
		printf("The triangle is valid");
	}
	else
	   printf("The triangle is not valid");
}
