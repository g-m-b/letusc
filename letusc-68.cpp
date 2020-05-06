#include<stdio.h>
#include<math.h>
int area_t(float a,float b,float c)
{
	double s,area;
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area is %0.2lf",area);
}
int main()
{
	float a,b,c;
	printf("Enter the sides of triangle seperated by comma :");
	scanf("%f,%f,%f",&a,&b,&c);
	area_t(a,b,c);
}

