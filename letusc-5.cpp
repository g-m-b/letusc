#include<stdio.h>
int main()
{
	int l,b,r;
	int area,perimeter;
	float area1,perimeter1;
	printf(" Enter the length and breadth of rectangle :");
	scanf("%d",&l);
	scanf("%d",&b);
	printf(" Enter the radius of circle :");
	scanf("%d",r);
	area=l*b;
	perimeter=2*(area);
	printf("area of triangle is %d",area);
	printf("perimeter of rectangle is %d",perimeter);
	area1=(22*r*r)/7;
	perimeter1=(2*r*22)/7;
	printf("area of circle is %f",area1);
	printf("perimeter of circle is %f",perimeter1);
	
}
