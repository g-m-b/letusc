#include<stdio.h>
int main()
{
	int k,m,c,d,f,rem;
	printf("Enter the date :");
	scanf("%d",&k);
	printf("Enter the mont :");
	scanf("%d",&m);
	printf("Enter the first two digits of year :");
	scanf("%d",&c);
	printf("Enter the last two digits of year :");
	scanf("%d",&d);
	f=k+((13*m-1)/5)+d+(d/4)+(c/4)-2*c;
	rem=f%7;
	switch(rem)
	{
		case 0:
			printf("Sunday");
			break;
		case 1:
			printf("monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thrusday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
	}
}
	
