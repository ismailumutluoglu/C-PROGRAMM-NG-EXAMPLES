/* Klavyeden girilen 25 adet sayı içerisinden negatif olanların toplamını,
çift sayıların çarpımını, 7'ye eşit olanların adetini bulup ekrana
yazdıran programın algoritma ve akış diyagramını çiziniz. */
#include <stdio.h>
int main()
{
    int num,negatife_toplam,positive_toplam,count,i;

    negatife_toplam=0;
    positive_toplam=0;
    count=0;

    for(i=1;i<=25;i++)
    {
        printf("%d. sayiyi giriniz ",i);
        scanf("%d",&num);

        if(num>0)
        {
            positive_toplam+=num;
        }
        else{
            negatife_toplam+=num;
        }

        if(num%7==0)
        {
            count++;
        }
    }

    printf("negatif sayilarin toplami = %d \n cift sayilarin toplami = %d \n 7'ye tam bolunebilen sayilarin adedi = %d",negatife_toplam,positive_toplam,count);

    return 0;
}