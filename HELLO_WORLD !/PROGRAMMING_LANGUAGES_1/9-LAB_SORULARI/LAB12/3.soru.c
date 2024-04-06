// Bir sınıftaki 10 öğrencinin boy ve kilo değerlerini iki boyutlu diziye klavyeden okuyarak 
// aktaran ve ortalama boy ve kilo değerlerini hesaplayarak ekrana yazdıran programı C dili ile 
// yazınız. 

#include <stdio.h>

int main()
{
    int array[2][10]  ;
    int i ,j , TOPLAM_BOY = 0 , TOPLAM_KG = 0 ; 
    float ORT_BOY = 0.0 ; 
    float ORT_KG = 0.0 ; 

    for(i = 0 ; i < 1 ; i++)
    {
        for(j = 0 ; j < 10 ; j++)
        {
            printf("%d.ogrencinin kilosunu giriniz : ",j+1);
            scanf("%d",&array[i][j]);
            

            TOPLAM_KG += array[i][j];
        }
    }
    for(i = 0 ; i < 1 ; i++)
    {
        for(j = 0 ; j < 10 ; j++)
        {
            printf("%d.ogrencinin boyunu giriniz : ",j+1);
            scanf("%d",&array[i][j]);

            TOPLAM_BOY += array[i][j];
        }
    }
    printf("ort boy  = %f \n",TOPLAM_BOY/10.0);
    printf("ort kg  = %f \n",TOPLAM_KG/10.0);
    return 0 ; 
}
