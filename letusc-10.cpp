#include<stdio.h>
int main()
{
	int men_p,men_lit,totalpop=80000,lit,ilit;
	men_p=(80000*52)/100;
	men_lit=(80000*35)/100;
	lit=(80000*48)/100;
	ilit=80000-lit;
	printf("The total number of illiterates are %d",ilit);
}
