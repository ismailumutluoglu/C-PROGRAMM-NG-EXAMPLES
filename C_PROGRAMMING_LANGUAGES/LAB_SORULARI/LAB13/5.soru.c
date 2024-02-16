// 5. Klavyeden girilen bir sayının asal sayı olup olmadığını kontrol eden fonksiyon yazınız. 
// Örnek: 101 
// > 101 sayisi asaldir.

#include <stdio.h>
void asalSayi(int x );
int main()
{
    int number ; 

    printf("bir sayi giriniz : ") ;
    scanf("%d",&number);

    asalSayi(number) ; 

    return 0 ; 
}

void asalSayi(int x )
{
    int i , control ; 

    control = 0 ; 

    for(i = 1 ; i <=x ; i++)
    {
        if(x%i == 0)
        {
            control++;
        }
    }
    if(control==2)
    {
        printf("asal sayi");
    }
    else
    {
        printf("asal degil");
    }
}

