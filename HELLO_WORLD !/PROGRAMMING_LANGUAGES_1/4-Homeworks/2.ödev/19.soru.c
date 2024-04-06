// GÜZEL SORU //
#include <stdio.h>
int main()
{
    int n,x,F,j,i,result,k;
    double sum=0;

    printf("x i giriniz");
    scanf("%d",&x);

    printf("terim sayisini giriniz");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {

        F=1;

        for(j=1;j<=i;j++)
        {
            F=F*j;
        }

        result=1;

        for(k=1;k<=i;k++)
        {
            result*=x;
        }

        sum+=(double)result/F;
    }

    printf("%lf",sum);
    
    return 0;
}