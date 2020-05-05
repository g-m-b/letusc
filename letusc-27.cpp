#include<stdio.h>
int main()
{
	int age;
    char sex,place,health_condition;
	printf("Enter the age :");
	scanf("%d",&age);
	printf("Enter the sex m or f :");
	scanf("\n%c",&sex);
	printf("Enter the place city(c) or village(v) :");
	scanf("\n%c",&place);
	printf("Enter the health condition Excellent(e) or Poor(p) :");
	scanf("\n%c",&health_condition);
	if(age>=25 && age <=35 && place=='c' && sex=='m' && health_condition=='e')
	{
		printf("insurance is granted te amount cannot be exceeded 2 lakh rupees and rate of intrest whould be 4rupees per thoushand");
	}
	else if(age>=25 && age <=35 && place=='c' && sex=='f' && health_condition=='e')
	{
		printf("insurance is granted te amount cannot be exceeded 1 lakh rupees and rate of intrest whould be 3rupees per thoushand");
	}
	else if(age>=25 && age <=35 && place=='v' && sex=='m' && health_condition=='p')
	{
		printf("insurance is granted te amount cannot be exceeded 10000 rupees and rate of intrest whould be 6rupees per thoushand");
	}
	else
	{
		printf("insurance is not approved");
		
	}
}
