#include<stdio.h>
int power(int a,int b)
{
	int res=a;
	for(int i=1;i<b;i++)
	{
		res*=a;
	}
	return res;
}
int main()
{
	int x,y,z;
	printf("Enter the number and power :");
	scanf("%d",&x);
	scanf("\n%d",&y);
	//z=power(x,y);
	printf("Result :",power(x,y));
}
