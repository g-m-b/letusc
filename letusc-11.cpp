#include<stdio.h>
int main()
{
	int amount;
	printf("Please input amount for withdraw : ");
	scanf("%d",&amount);
	printf("\n\nRequired notes of Rs. 100  :  %d", amount / 100);
	printf("\n\nRequired notes of Rs. 50   :  %d", (amount % 100) / 50);
	printf("\n\nRequired notes of Rs. 10   :  %d", (((amount % 100) % 50) / 10));
	printf("\n\nAmount still remaining Rs. :  %d", (((amount % 100) % 50) % 10));
}
