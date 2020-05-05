#include<stdio.h>
int main()
{
	int c;
	int f;
	printf("Enter the temperature:");
	scanf("%d",&f);
	c=(f-32)/1.8;
	printf("%d",c);
}
