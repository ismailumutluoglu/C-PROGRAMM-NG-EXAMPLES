#include <stdio.h>
int main()
{
    int YUZ,ELLI,YIRMI,ON,KALAN,money,sum=0;
    printf("para miktarini giriniz");
    scanf("%d",&money);
    while(money%10!=0)
    {
        printf("tekrar deneyiniz");
        scanf("%d",&money);
    }
    YUZ=money/100;
    KALAN=money%100;
    ELLI=KALAN/500;
    KALAN=KALAN%50;
    YIRMI=KALAN/20;
    KALAN=KALAN%20;
    ON=KALAN/10;
    
    printf("yüz adedi = %d\n",YUZ);
    printf("elli adedi = %d\n",ELLI);
    printf("yirmi adedi = %d\n",YIRMI);
    printf("on adedi = %d\n",ON);

    sum=YUZ+ELLI+YIRMI+ON;

    printf("toplam bankot adedi = %d",sum);

    return 0;
}