#include<stdio.h>
int main()
{
	int a[4][4],b[4][4],i,j;
	printf("Enter the elements  :");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		   scanf("%d",&a[i][j]);
	}
	printf("-----Transpose of a matrix------");
		for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			b[j][i]=a[i][j];
		}
	}
		for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
				printf("\n%d\t",b[i][j]);
		}
		printf("\n");
	}
	
}
