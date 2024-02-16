#include <stdio.h>
#include <math.h>
int main()
{
    double Amount,P,R,T,CI;

    P = 10000 ; 
    R = 5 ; 
    T = 2 ; 

    Amount=P*pow((1+R/100),T);

    CI = Amount - P ; 

    printf("%lf",CI);

    return 0;
}