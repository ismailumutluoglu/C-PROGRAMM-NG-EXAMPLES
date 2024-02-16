#include <stdio.h>

int main()
{
    int step,N,i,j,k;
    double F,us,x,sum = 0.0;
    
    printf("adim sayisini giriniz");
    scanf("%d",&step);

    printf("x sayisini giriniz");
    scanf("%lf",&x);

    sum = 0.0 ;

    for(i=0;i<N;i++)
    {
        us = 1 ;
        F = 1;
        // üs aldırmak için

        for(k=0;k<i;k++)
        {
            us=us*x;
        }

        //faktoriyel
        for(j=1;j<=i;j++)
        {
            F=F*j;
        }
        
        sum=sum+(double)us/(double)F;
    }
    printf("%lf",sum);
    return 0 ; 

}