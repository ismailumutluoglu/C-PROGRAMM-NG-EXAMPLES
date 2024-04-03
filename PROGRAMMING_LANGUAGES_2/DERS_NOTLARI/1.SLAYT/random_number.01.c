#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int zar1 , zar2 ;
    int toplam = 0 ; 
    int score = 0 ; 
    for(int i = 1 ; ;i++)
    {
        zar1 = rand() % 6 + 1 ;
        zar2 = rand() % 6 +1 ;
        toplam = zar1 + zar2 ;

        if(i == 1 && (toplam == 7 || toplam == 11))
        {
            printf("TEBRIKLER KAZANDIN ");
            break;
        }

        if(i == 1 && (toplam == 2 || toplam == 3 || toplam == 12))
        {
            printf("UZGUNUM KAYBETTİN...");
            break;
        }

        if(i == 1 && (toplam == 4 || toplam == 5 || toplam == 6 || toplam == 8 || toplam == 9 || toplam == 10))
        {
            score = toplam ;
        }
               
    }
    return 0 ; 
}