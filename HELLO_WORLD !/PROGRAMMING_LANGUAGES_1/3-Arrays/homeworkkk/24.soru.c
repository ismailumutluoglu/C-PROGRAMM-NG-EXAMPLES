/*Girilen a ve b sayısı 50'den büyük olduğunda c=a+b işlemini yapan
değilse bu sayılar uygun değil yazdıran programın algoritma ve akış
diyagramını çiziniz.*/
#include <stdio.h>
int main()
{
    int a,b,c;

    printf("a sayisini giriniz");
    scanf("%d",&a);

    printf("b sayisini giriniz");
    scanf("%d",&b);

    if(a>50 && b>50)
    {
        c=a+b;
        printf("%d",c);
    }
    else{
        printf("uygun degil");
    }
        return 0;
}