#include<stdio.h>
int main()
{
	int sp,cp,p,l;
	printf("Enter the selling price and cost price:");
	scanf("%d",&sp);
	scanf("%d",&cp);
	if(sp>cp)
	{
		p=sp-cp;
		printf("profit is %d",p);
	}
	else if(cp>sp)
	{
		l=cp-sp;
		printf("loss is %d",l);
	}
	else
		printf("No profit No loss");
}
