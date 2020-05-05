#include<stdio.h>
int main()
{
	int A,B;
	printf("Enter the percentage in A subject and B subject");
	scanf("%d\n%d",&A,&B);
	if(A>55 && B>45)
	{
		printf("Pass");
	}
	else if(A==55 && B>=55)
	{
		printf("Pass");
	}
	else if(A>65 && B<=45)
	{
		printf("Reappear Exam B to qualify");
	}
	else
	{
		printf("Fail");
	}
}
