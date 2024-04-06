// 1+x/1!+x^2/2!+x^3/3! 

#include <stdio.h>
#include <math.h>
int main()
{
    int x,i,N,F,j;
    float sum;

  
    sum=1;
    F=1;

    printf("x sayisini giriniz");
    scanf("%d",&x);

    printf("N adim sayisini giriniz");
    scanf("%d",&N);

    for(i=1;i<N;i++)
    {
        
        for(j=1;j<=i;j++)
        {
            F=F*j;
        }
        sum+=(float)pow(x,i)/F;
    }
    printf("%.2f",sum);
    return 0;
}