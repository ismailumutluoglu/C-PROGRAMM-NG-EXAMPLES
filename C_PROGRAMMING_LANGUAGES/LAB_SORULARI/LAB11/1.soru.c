// 8 elemanlı float diziye klavyeden değer girin. Girilen değerlerin ortalamasını hesaplayıp 
// ekrana yazdırın. 

#include <stdio.h>

int main()
{
    float array[8]  ; 
    float toplam = 0.0 ;
    int i ; 
    
    for(i = 0 ; i < 8 ; i++)
    {
        printf("%d. elemani giriniz : ",i+1);
        scanf("%f",&array[i]);
        toplam+=array[i];
    }
    printf("ortalama = %f",toplam/8.0);
    return 0 ; 
}