#include <stdio.h>
int main()
{
    int kenar1,kenar2,alan,cevre;
    printf("dikdörtgenin kenar uzunluklarini giriniz");
    scanf("%d%d",&kenar1,&kenar2);
    alan=kenar1*kenar2;
    cevre=2*(kenar1+kenar2);
    printf("alan = %d\n cevre = %d",alan,cevre);
    return 0;
}