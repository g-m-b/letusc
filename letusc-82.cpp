#include<stdio.h.>
int main()
{
	int a[6][6],b[6][6],c[6][6],i,j;
	printf("Enter the elements of a:");
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		  scanf("%d",&a[i][j]);
	}
		printf("Enter the elements of b:");
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		  scanf("%d",&b[i][j]);
	}
	printf("------Addition-------\n");
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		  c[i][j]=a[i][j]+b[i][j];
	}
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		  printf("\n%d",c[i][j]);
		printf("\t");
	}
	
}
