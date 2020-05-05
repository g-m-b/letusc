#include<stdio.h>
int main()
{
	int sp,tp;
	float cp;
	printf("Enter the selling price and totalprofit of 15 items : ");
	scanf("%d",&sp);
	scanf("%d",&tp);
	cp=sp-tp;
	cp=cp/15;
	printf("The costprice per item is %f",cp);
}
