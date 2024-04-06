#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;

    printf("ucgenin dik olan iki kenar uzunlugunu giriniz");
    scanf("%d %d",&a,&b);

    c=sqrt(a*a+b*b);
    printf("hipotenus : %d",c);
    return 0;
}