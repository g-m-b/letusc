#include<stdio.h>
int main()
{
	float time;
	printf("Enter the time taken for the job :");
	scanf("%f",&time);
	if (time<=2 && time>3)
	{
		printf("Efficient");
	}
	else if(time <=3 && time>4)
	{
		printf("Improve speed");
	}
	else if(time <=4 && time>5)
	{
		printf("Need training to increase speed");
	}
	else if(time >5)
	{
		printf("Leave the company");
	}
	
}
