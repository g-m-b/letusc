#include<stdio.h>
int main()
{
	int temp,*c,*d;
	printf("Enter the values :");
	scanf("%d",&c);
	scanf("%d",&d);
	temp=*c;
	*c=*d;
	*d=temp;
	printf("%d",&c);
	printf("%d",&d);
}
