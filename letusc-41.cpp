#include<stdio.h>
int main()
{
	int a,x,n=71,o=10,y=1,c;
	for(x=1;x<=7;x++)
	{
		for(a=65;a<=n;a++)
		{
			printf("%c",a);
		}
			
	    if(x==2)
			{
				o=70;
			}
		for(c=2;c<y;c++)
			{
				printf(" ");
			}
		for(a=o;a>=65;a--)
			{
				printf("%c",a);
			}
		printf("\n");
		n--;
		o--;
		y=y+2;
	}
}
