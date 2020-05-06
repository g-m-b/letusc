#include <stdio.h>
#include <math.h>

void avg(int a, int b, int c, int d, int e, int *su, float *av, float *std)
{
 *su = a + b + c + d + e;
 *av = *su / 5;
 *std = sqrt((((a - *av)*(a - *av)) + ((b - *av)*(b - *av)) + ((c - *av)*(c - *av))) / 5.0);
}


int  main( )
{
 float ave, sd;
 int a, b, c, d, e, sum;
 printf("\nInput 5  comma seperated integers: ");
 scanf("%d,%d,%d,%d,%d", &a, &b, &c, &d, &e);
 avg(a, b, c, d, e, &sum, &ave, &sd);
 printf("\nThe sum is %d\nThe average is %f\nThe standard deviation is %f\n", sum, ave, sd);
}
