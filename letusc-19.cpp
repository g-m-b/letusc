#include<stdio.h>
int main()
{
	int r,s,a;
	printf("Enter the ages :");
	scanf("%d",&r);
	scanf("%d",&s);
	scanf("%d",&a);
	if(r<s && r<a)
	{
		printf("Ram is youngest");
	}
	else if(s<r && s<a)
	{
		printf("Shyam is youngest");
	}
	else
	    printf("Ajay is youngest");
}
