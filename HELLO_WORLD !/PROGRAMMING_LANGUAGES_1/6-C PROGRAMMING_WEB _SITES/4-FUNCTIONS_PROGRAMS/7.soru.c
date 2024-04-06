// Bir sınıftaki 10 öğrencinin boy ve kilo değerlerini iki boyutlu diziye klavyeden okuyarak
// aktaran ve ortalama boy ve kilo değerlerini hesaplayarak ekrana yazdıran programı C dili ile
// yazınız.

#include <stdio.h>

int main()
{
    int array[2][10];
    int i ,j ;
    float sum1 = 0.0 , sum2 = 0.0; 

    for(i=0;i<2;i++)
    {
        for(j=0;j<10;j++)
        {
            if(i==0)
            {
            printf("%d.ogrencinin kilosunu giriniz",j+1);
            scanf("%d",&array[i][j]);
            sum1 += array[i][j] ;  
            }
            else
            {
                printf("%d.ogrencinin boyunu giriniz",j+1);
                scanf("%d",&array[i][j]);
                sum2 += array[i][j] ;
            }
        }
    }

    printf("ortalama kilo = %f\n",(float)sum1/10);
    printf("ortalama boy = %f\n",(float)sum2/10);

    return 0 ; 
}