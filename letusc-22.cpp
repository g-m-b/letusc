#include<stdio.h>
int main()
{
	int area,perimeter,l=5,b=4;
	area=l*b;
	perimeter=2*(l+b);
	if (area >perimeter)
	{
		printf("area %d is greater than perimeter %d",area,perimeter);
	}
	else
	{
		printf("area is lesser than perrimeterr");
	}
}
