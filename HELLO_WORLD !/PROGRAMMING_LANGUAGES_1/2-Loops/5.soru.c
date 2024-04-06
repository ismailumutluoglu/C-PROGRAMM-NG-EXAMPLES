#include <stdio.h>
#include <math.h>
int main()
{
    int N,x,F,i,j; // N : adım sayısı x : soruda kullanicinin girmesi gereken sayi
    double sum=0;
    
    printf("adim sayisini giriniz : ");
    scanf("%d",&N);

    printf("x sayisini giriniz : ");
    scanf("%d",&x);
    
    for(i=0;i<N;i++)
    {
        //faktöriyeli bulmak için
        F=1;
        for(j=1;j<=2*i;j++)
        {
            F*=j;
        }

        if(i%2==0)
        {
            sum-=pow(x,2*i)/F;
        }
        else{
            sum+=pow(x,2*i)/F;
        }
    }
    printf("%lf",sum);

    return 0;
}