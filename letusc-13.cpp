#include<stdio.h>
#include<conio.h>
int main ()
{
    int value,dig1,dig2,dig3,dig4,dig5,temp;
    printf("Please enter a five-digit number: ");
    scanf("%d",&value);
    temp = value ; 
    dig1 = value % 10;
    value = value / 10;
    dig2 = value % 10;
    value = value / 10;
    dig3 = value % 10;
    value = value / 10;
    dig4 = value % 10;
    value = value / 10;
    dig5 = value % 10;
    dig1 = ((dig1+1)%10);
    dig2 = ((dig2+1)%10);
    dig3 = ((dig3+1)%10);
    dig4 = ((dig4+1)%10);
    dig5 = ((dig5+1)%10); 
    printf("\n\n   By adding one in each digit of %d it becomes : %d%d%d%d%d",temp,dig5,dig4,dig3,dig2,dig1);
}
