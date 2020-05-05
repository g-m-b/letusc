#include<stdio.h>
#include<math.h>
int main()
{
	unsigned int i=1;
    double P,R,N,Q,S,A,M,T;
    while(i<=10)
    {
        printf("\n------------ SET %d ------------\n",i);
        printf("Enter Principal amount(P): ");
        scanf("%lf",&P);
        printf("Enter Annual ROI(R): ");
        scanf("%lf",&R);
        printf("Enter Total No. of years(N): ");
        scanf("%lf",&N);
        printf("Enter No.of times amount compounded(Q): ");
        scanf("%lf",&Q);
        M = N*Q;
        R = R/100;
        S = 1 + R/Q;
        T = pow(S,M);
        A = P * T;
        printf("Annual amount A = %lf",A);
        i++;
    }
}
