#include<stdio.h>
int main()
{
	int arr[20][20],m,n,i,j,t;
	printf("Enter te rows and columns :");
	scanf("%d\n%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		    scanf("\n%d",&arr[i][j]);
	}
	t=arr[0][0];
	printf("-----largest-----");
		for(i=1;i<m;i++)
	{
		for(j=1;j<n;j++)
		{
			if(t<arr[i][j])
			{
				t=arr[i][j];
			}
		}
	}
	printf("\n%d",t);
	
}
