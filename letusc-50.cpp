#include<stdio.h>
int main()
{
	int num1,num2,num3,n,fact=1,c;
	printf("-------Menu-------");
	printf("\n 1.Factorial of a number");
	printf("\n 2.Prime or not");
	printf("\n 3.Even or odd");
	printf("\n 4.Exit");
	printf("Enterr the choice :");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("Enter the number :");
			scanf("%d",&num1);
			for(int i=1;i<=num1;i++)
				fact=fact*i;
			printf("Factorial of %d is %d",num1,fact);
			break;
		case 2:
			printf("Enter the number :");
			scanf("%d",&num2);
            for (c = 2;c<= num2-1;c++)
                {
                    if ( num2%c == 0 )
                    {
                        printf("%d is not prime.\n",num2);
                     break;
                    }
                }
            if ( c == num2)
               printf("%d is prime.\n", num2);
            break;
		case 3:
			printf("Enterr the number :");
			scanf("%d",&num3);
			if((num3%2)==0)
			{
				printf("Number is even");
			}
			else
			{
				printf("Number is odd");
			}
		case 4:
			  printf("Exit");
		default:
			printf("Entered choice is invalid please choose from the menu ");
	}
	
}
