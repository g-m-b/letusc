#include<stdio.h>
float mul(float i,int x);
int main()
{
	int x;
	float i;
	printf("Enter the values :");
	scanf("%f\n%d",&i,&x);
	mul(i,x);
}
float mul(float i,int x)
{
	int res;
	res=i*x;
	printf("Result : %d",res);
}
