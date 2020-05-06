#include<stdio.h>
void GCD(unsigned int a, unsigned int b)
{
    unsigned int D,R;
    {
        D = a/b;
        R = a - D*b;           
        a = b;
        if(R==0)
            printf("GCD = %d",b);
        else
        {
            b=R;
            GCD(a,b);
        }
    }
}
int main()
{
    unsigned int L,S,temp;
    printf("Program to compute GCD using Euclid's algorithm\n");
    printf("Enter 1st Number: ");
    scanf("%d",&L);
    printf("Enter 2nd Number: ");
    scanf("%d",&S);
    if(S>L)
    {
        temp = L;
        L = S;
        S = temp;
    }
    GCD(L,S);
}


