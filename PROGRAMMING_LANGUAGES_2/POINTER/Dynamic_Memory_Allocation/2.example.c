//aynı örneğin calloc ile yapımı
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N,*ptr,i,sum=0;
    printf("dizinin kac elemandan olusacagini giriniz : ");
    scanf("%d",&N);
    ptr = (int*)calloc(N,sizeof(int)); // dynamically allocated array   
    if(ptr == NULL)
        printf("yeterli hafiza yok !");
    else
    {
        for(i=0;i<N;i++)
        {
            printf("dizinin %d. elemanini giriniz : ",i+1);
            scanf("%d",ptr+i);
            sum+=*(ptr+i);
            // printf("%d ",*(ptr+i)); // CALLOCDA İLK DEĞER ATANMASI YAPILMAZSA BELLEKTE TAHSİS EDİLEN O ALANDAKI DEĞERLERİN HEPSİ 0 KABUL EDİLİR.
        }
    }
    free(ptr);
    printf("%d",sum);
    return 0 ; 
}