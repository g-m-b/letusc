#include <stdio.h>
#include <conio.h>
int main()
{
    int year=0,inv=0,altn=0,Yly_Profit,Machine_Cost;
    Yly_Profit = 720;
    Machine_Cost = 6000-2000;
    while(altn>(inv-Machine_Cost))
    {
        altn=altn+Yly_Profit;
        inv=inv+1000;
        year++;
    }
    printf("\nMinimum life of the machine should be = %d",year);
    printf("\nwhich will yield total profit of %d-4000=%d",inv,inv-4000);
    printf("\nagainst yield on alternate invenstment = %d",altn);
}
