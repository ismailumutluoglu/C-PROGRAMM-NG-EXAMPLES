// malloc ile ilgili bir örnek ; 
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N,*ptr,i,sum=0;
    printf("dizinin kac elemandan olusacagini giriniz : ");
    scanf("%d",&N);
    ptr = (int*)malloc(N*sizeof(int));
    if(ptr == NULL)
        printf("yeterli hafiza yok !");
    else
    {
        for(i=0;i<N;i++)
        {
             printf("dizinin %d. elemanini giriniz : ",i+1);
             scanf("%d",ptr+i);
             sum+=*(ptr+i);
            // printf("%d ",*(ptr+i)); // MALLOCTA İLK DEĞER ATANMAZSA BELLEKTE TAHSİS EDİLEN ALANDAKİ DEĞERLAR GARBAGE-ÇÖP-RANDOM SAYILAR VERİR.
        }
    }
    printf("%d",sum);
    return 0 ; 
}