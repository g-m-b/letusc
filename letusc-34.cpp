#include<stdio.h>
int main()
{
    int stock=100, order;
    char credit;
    printf("Enter the customer order: ");
    scanf("%d", &order);
    printf("Is his credit is ok? (Press y/n)\n");
    scanf("\n%c",&credit);
    if(order<=stock && credit == 'y' || credit == 'Y')
        printf("Sir,\n\t We supplied your requirement\n\t\t Quantity: %d",order);
    else if(order>stock && credit == 'y' || credit == 'Y')
        printf("Sir,\n\t We supplied %d products and balance will be shipped later.",stock);
    else
        printf("Sir,\n\t Please first clear your credit, until we can't supply you any more.");
}
