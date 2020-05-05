#include<stdio.h>
int main()
{
	int h,t;
	float cc;
	printf("Enter the hardness :");
	scanf("%d",&h);
	printf("Enter the carbon content :");
	scanf("\n%f",&cc);
	printf("Enter the tensile strengt :");
	scanf("\n%d",&t);
	if(h>50 && cc<0.7 && t>5600)
	{
		printf("Grade 10");
	}
	else if(h>50&&cc<0.7)
	{
		printf("Grade 9");
	}
	else if(cc<0.7 && t>5600)
	{
		printf("Grade 8");
	}
	else if(h>50 && t>5600)
	{
		printf("Grade 7");
	}
	else if(h>50 || cc<0.7 || t>5600)
	{
		printf("Grade 6");
	}
	else
	{
		printf("grade 5");
		
	}
}
