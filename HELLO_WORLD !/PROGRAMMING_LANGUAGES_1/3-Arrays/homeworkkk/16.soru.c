/* .X,Y pozitif olmak üzere, eğer x sayısının çarpanları toplamı y sayısına
ve aynı zamanda y sayısının çarpanları toplamı x sayısına eşit ise bu
sayılar dost sayılardır. Buna göre girilen iki sayının dost olup
olmadığını bulan programın algoritma ve akış diyagramını çiziniz */
#include <stdio.h>
int main()
{
    int i,x,y,sum1,sum2;

    sum1=0;
    sum2=0;

    printf("x sayisini giriniz ");
    scanf("%d",&x);

    printf("y sayisini giriniz ");
    scanf("%d",&y);

    for(i=1;i<x;i++)
    {
        if(x%i==0)
        {
            sum1+=i;
        }
    }

    for(i=1;i<y;i++)
    {
        if(y%i==0)
        {
            sum2+=i;
        }
    }

    if(sum1==y && sum2==x)
    {
        printf("bu sayilar dost sayilardir");
    }
    else{
        printf("bu sayilar kalllesstirler");
    }

    return 0;
}