#include <stdio.h>
void printmatris(int dizi[][10],int size);
int main()
{
    int notlar[3][10] ; 
    
    printmatris(notlar,3);
    return 0 ;
}

void  printmatris(int dizi[][10],int size)
{
    float sum ;

    for(int i = 0 ; i < size ; i++)
    {
        for(int j = 0 ; j < 10 ; j++)
        {
            printf("%d. ogrencinin %d. ders notunu giriniz : ",j+1,i+1);
            scanf("%d",&dizi[i][j]);
        }
    }

    for(int i = 0 ; i < size ; i++)
    {
        sum = 0.0 ;
        for(int j = 0 ; j < 10 ; j++)
        {
           printf("%d ",dizi[i][j]);
           sum+=dizi[i][j];
        }
        printf("ortalama = %f",sum/10.0);
        printf("\n");
    }
}