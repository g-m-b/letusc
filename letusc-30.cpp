#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the angles :");
	scanf("%d\n%d\n%d",&a,&b,&c);
	if(a>b && a>c)
	{
		if((b+c)>a)
		{
			printf("triangle is vaild");
		}
		else
		{
			printf("triangle is not valid");
		}
	}
	if(b>a && b>c)
	{
		if((a+c)>b)
		{
			printf("triangle is vaild");
		}
		else
		{
			printf("triangle is not valid");
		}
	}
	if(c>a && c>b)
	{
		if((b+a)>c)
		{
			printf("triangle is vaild");
		}
		else
		{
			printf("triangle is not valid");
		}
	}
}
