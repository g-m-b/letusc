#include<stdio.h>
void ShiftRight(int,int,int);
int main()
{
    int x,y,z;
    printf("Program to circularly shift the values of 3 variables to right \n");
    printf("Enter 3 variables: ");
    scanf("%d%d%d",&x,&y,&z);
    printf("Before Shifting\n%d %d %d",x,y,z);
    ShiftRight(x,y,z);
}
void ShiftRight(int a,int b,int c)
{
    int temp;
    temp = a;
    a = c;
    c = b;
    b = temp;
    printf("\nAfter Shifting\n%d %d %d",a,b,c);
}

