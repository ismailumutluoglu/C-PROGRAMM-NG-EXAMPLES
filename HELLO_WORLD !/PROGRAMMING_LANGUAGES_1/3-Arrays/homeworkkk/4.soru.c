/*Doğum tarihi girilen kişinin yaşını hesaplayan programın algoritma ve
akış diyagramını çiziniz*/

#include <stdio.h>

int main()
{
    int today,birthDay,result;

    printf("bugun hangi yildayiz onu giriniz");
    scanf("%d",&today);

    printf("dogdugunuz yili giriniz");
    scanf("%d",&birthDay);

    result=today-birthDay;

    printf("yasiniz : %d",result);

    return 0;

}