#include<stdio.h>
int main()
{
	int i,res,rem,n;
	res=0;
	printf("enter the number :");
	scanf("%d",&n);
	i=n;
	while(n!=0)
	{
	  rem=n%10;
	  n=n/10;
	  res= res*10+rem;
    }
   if(res==i)
   {
   	printf("The number is palindrome");
	}
	else
	{
		printf(" The number is not palindrome");
		}	
}
