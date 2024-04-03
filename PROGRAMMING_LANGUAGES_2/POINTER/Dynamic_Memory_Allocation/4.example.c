#include <stdio.h>
int kare_alma(int);
int kup_alma(int);
int main()
{
    int secim;
    int(*islem)(int);
    int sayi;
    printf("bir sayi giriniz : ");
    scanf("%d",&sayi);
    printf("1-karesini alma/2-kupunu alma");
    scanf("%d",&secim);
    if(secim==1)
        islem = kare_alma;
    else
        islem = kup_alma;
    printf("sonuc =  %d",islem(sayi));
    return 0 ; 
}
int kare_alma(int x)
{
    return x*x;
}
    

int kup_alma(int x)
{
    return x*x*x;
}
    