//  Klavyeden Integer tipinde tek boyutlu bir dizi
// alan ve dizide kaç tane 4’ün katı olan sayı
// olduğunu döndüren fonksiyonu ve ana
// programı yazın

#include <stdio.h>

void newArray(int array[],int size ) ;

int main()
{
    int array[10] = {1,2,3,4,5,6,7,8,9,10};

    newArray(array,10);

    return 0 ; 
    
}
void newArray(int array[],int size)
{
    int i , count ;
    count = 0 ; 
    for(i=0;i<10;i++)
    {
        if(array[i] % 4 == 0)
        {
            count++;
        }
    }
    printf("%d tane sayi 4 e tam bolunur",count);
}
