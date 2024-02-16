#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d,kok1,kok2;
    printf("ikinci dereceden bir denklemin katsayilarini giriniz");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
      kok1=(-b+sqrt(d))/2*a;
      kok2=(-b-sqrt(d))/2*a;
      printf("kokler : %d %d",kok1,kok2);
    }
    if(d==0)
    {
    kok1=kok2=-b/2*a;
    printf("kokler birbirine esittir ve %d dir",kok1);
    }
    if(d<0)
    {
      printf("real kok yoktur");
    }
    return 0;
}