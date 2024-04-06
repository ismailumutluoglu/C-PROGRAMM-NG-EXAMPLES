#include <stdio.h>
#include <math.h>
int main()
{
    int x,N,F,i,j;
    float sum=0.0;

    printf("x sayisini giriniz");
    scanf("%d",&x);

    printf("N adim sayisini giriniz");
    scanf("%d",&N);
    i=1;
    for(i=1;i<=N;i++)
    {
        F=1;
        for(j=1;j<=i;j++)
        {
            F=F*j;
        }
        sum+=(float)pow(x,i)/F;
    }
    printf("%.2f",sum);
    return 0;
}