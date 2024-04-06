#include <stdio.h>
#include <math.h>
int main()
{
    int x,N,i,j,k,F;
    float sum=1;

    printf("x sayisini giriniz");
    scanf("%d",&x);

    printf("N adim sayisini giriniz");
    scanf("%d",&N);

    k=0;
    for(i=1;i<N;i++)
    {
        F=1;
        for(j=1;j<=k;j++)
        {
            F=F*j;
        }
        if(i%2==1) 
        {
            sum+=(float)pow(x,k)/F;
        }
        else
        {
            sum-=(float)pow(x,k)/F;
        }
        k+=2;
    }
    printf("%.2f",sum);
    return 0;
}