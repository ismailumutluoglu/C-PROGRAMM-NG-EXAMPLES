/*
Bir memur, ATM makinasından para çekmek istemektedir. Makinede sadece 10, 20, 50 ve 
100 TL' lik banknotlar kalmıştır. Büyük değerli banknotların sayısı maksimum olacak şekilde, 
çekilecek paranın kaç tane 100, 50, 20 ve 10 liralık banknottan oluşacağını ekranda yazan C 
programını yazınız.

*/

#include <stdio.h>
int main()
{
    int para,YUZ,ON,YIRMI,ELLI,toplam_banknot;

    toplam_banknot=0;
    
    printf("para miktarini giriniz");
    scanf("%d",&para);

    YUZ =para / 100;
    toplam_banknot+=YUZ;
     para-=100*YUZ;
    ELLI = para / 50;
    toplam_banknot+=ELLI;
     para-=50*ELLI;
    YIRMI = para / 20;
    toplam_banknot+=YIRMI;
     para-=20*YIRMI;
    ON = para / 10;
    toplam_banknot+=ON;
    
    printf("yuzluk = %d\n",YUZ);
    printf("ellilik = %d\n",ELLI);
    printf("yirmilik = %d\n",YIRMI);
    printf("onluk = %d\n",ON);
    printf("toplam banknot = %d\n",toplam_banknot);
     
    return 0;

}