#include <stdio.h>
void notlariAl(int matris[][5],int size);
void notlariOku(int matris[][5],int size);
int main()
{
    int notlar[3][5];
    notlariAl(notlar,3);
    notlariOku(notlar,3);
    return 0 ; 
}
void notlariAl(int matris[][5],int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        for(int j = 0 ; j < 5 ; j++)
        {
            printf("%d. ogrencinin %d. dersinin notunu giriniz : ",i+1,j+1);
            scanf("%d",&matris[i][j]);
        }
    }
}
void notlariOku(int matris[][5],int size)
{
    float max = 0.0 ;

    float min = 500 ;

    float sum ;
    
    for(int i = 0 ; i < size ; i++)
    {
        sum = 0.0;
        for(int j = 0 ; j < 5 ; j++ )
        {
            printf("%d  ",matris[i][j]);
            sum+=matris[i][j] ; 
        }
        printf(" ortalama  = %f",sum/5);
        if(sum/5>max)
        {
            max = sum/5 ;
        }
        if(sum/5<min)
        {
            min = sum/5;
        }
        printf("\n\n");
    }

    printf("en yüksek ortalam = %f\n",max);
    printf("en dusuk ortalama = %f",min);
}

