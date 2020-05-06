#include<stdio.h>
int power(int a,int b)
{
	int i,res=a;
	for(i=1;i<b;i++)
	{
		res=res*a;
	}
	return res;
}
int main()
{
	int x,y,z;
	printf("Enter the number and power :");
	scanf("%d",&x);
	scanf("\n%d",&y);
	z=power(x,y);
	printf("Result : %d",z);
}
