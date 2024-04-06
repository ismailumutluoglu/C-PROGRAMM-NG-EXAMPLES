/* Girilen sayının kaç basamaklı olduğunu söyleyen programın algoritma
ve akış diyagramını çiziniz */
#include <stdio.h>

int main()
{
    int num,i,a;

    i=0;
    
    printf("bir sayi giriniz ");
    scanf("%d",&num);
    a=num;

    while(num>0)
    {
        num/=10;
        i++;
    }
    printf(" %d sayisi %d basamaklidir :)",a,i);
    return 0;
}