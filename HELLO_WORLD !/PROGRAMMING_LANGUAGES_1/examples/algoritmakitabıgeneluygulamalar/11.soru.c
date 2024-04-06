//bölme işlemi operatör kullanmadan
#include <stdio.h>
int main()
{
    int a,b,kalan,i;

    i=0;
    printf("a sayisini giriniz");
    scanf("%d",&a);

    printf("b sayisini giriniz");
    scanf("%d",&b);

    while(a>0){
        a-=b;
        i++;
    }
    kalan=a+b;
    printf("bolum = %d\n",i);
    printf("kalan = %d",kalan);

    return 0;
}