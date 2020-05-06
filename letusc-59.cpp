#include<stdio.h>
int marksp(int p1, int p2,int p3)
{
	int avg;
	avg=(p1+p2+p3)/3;
	printf("Average of three subjects is %d\n",avg);
	printf("Percentage in paper 1 is %d\n",p1);
	printf("Percentage in paper 2 is %d\n",p2);
	printf("Percentage in paper 3 is %d\n",p3);
}
int main()
{
	int p1,p2,p3;
	printf("Enter the marks in three subjects :");
	scanf("%d\n%d\n%d",&p1,&p2,&p3);
	marksp(p1,p2,p3);
}

