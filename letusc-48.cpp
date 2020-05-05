#include<stdio.h>
#include<math.h>
int main()
{
	float Sum=0,x,T;
    unsigned int i;
    printf("Enter value of x: ");
    scanf("%f",&x);
    T = (x-1)/x;
    for(i=2;i<=7;i++)
    {
        Sum = Sum + 0.5 * pow(T,i);
    }
    Sum = Sum + T;
    printf("Sum of 1st 7 terms of Natural log = %f",Sum);
}
