// 4- Küçükten büyüğe doğru sıralı bir diziye, dizinin sırasını bozmayacak şekilde, verilen bir elemanı 
// ekleyen fonksiyonu yazınız.

#include <stdio.h>

int main()
{
    int dizi[10] = {4,1,2,5,3} ;
    int temp ; 

    dizi[5] = 8 ; 
    for(int i = 0 ; i < 6 ; i++)
    {
        for(int j = 0 ; j < 6 ; j++)
        {
            if(i!=j)
            {
                if(dizi[i] < dizi[j])
                {
                    temp = dizi[i] ;
                    dizi[i] = dizi[j] ;
                    dizi[j] = temp ;
                }
            }
        }
    }

    for(int i = 0 ; i < 6 ; i++)
    {
        printf("%d ",dizi[i]);
    }
    return 0 ; 
}