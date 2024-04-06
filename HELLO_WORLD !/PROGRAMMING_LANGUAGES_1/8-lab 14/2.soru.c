// iki sayi arasinda rastgele sayi üreten fonksiyon

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void rastgele(int x , int y) ;
int main()
{
    int x , y ; 

    printf("baslangic degerini gir : ");
    scanf("%d",&x); // 5
    printf("bitis degerini gir : ");
    scanf("%d",&y); // 20 

    rastgele(x,y);

    return 0 ; 
}

void rastgele(int x , int y)
{
     srand(time(NULL));
    int sayi , i ; 

    for(i = 0 ; i < 10 ; i++)
    {
        sayi = rand() % (y-x+1) + x ; 
        printf("%d ",sayi);
    }
}