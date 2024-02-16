#include <stdio.h>

int toplam(int x,int y);

int cikarma(int x,int y);

int carpma(int x,int y);

float bolum(int x,int y);

int main()
{
    int a,b;

    printf("birinci sayiyi giriniz");
    scanf("%d",&a);

    printf("ikinci sayiyi giriniz");
    scanf("%d",&b);

    printf("%d\n",toplam(a,b));
    printf("%d\n",cikarma(a,b));
    printf("%d\n",carpma(a,b));
    printf("%d",bolum(a,b));

    return 0 ;
}
int toplam(int x ,int y )
{
    return x+y;
}
int cikarma(int x, int y)
{
    return x - y ;
}
int carpma(int x , int y)
{
    return x*y;
}
float bolum(int x , int y)
{
    return  (float)x/y ;
}
