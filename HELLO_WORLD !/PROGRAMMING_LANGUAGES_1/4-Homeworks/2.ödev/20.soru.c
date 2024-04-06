#include <stdio.h>
#include <math.h>
int main()
{
    int n,x,i,j;
    double sum=0;

    printf("x i giriniz");
    scanf("%d",&x);
   
    printf("terim sayisini giriniz");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    { 
        if(i%2!=0)
        {
            sum+=pow(x,2*i-1);
        }
        else
        {
            sum-=pow(x,2*i-1);
        }
    }
    printf("%lf",sum);
    return 0;
}