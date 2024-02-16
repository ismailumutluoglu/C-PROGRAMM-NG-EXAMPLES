#include <stdio.h>
void giris(int ogrenciNo[],int N,int notlar[]);

int main()
{
    int N ; 
    int i; 
    float sum = 0.0;
    int ogrenciNo[N],notlar[N];

    printf("ogrenci  sayisini giriniz : ");
    scanf("%d",&N);

    giris(ogrenciNo,N,notlar);
    

    for(i=0;i<N;i++)
    {
        sum += notlar[i] ; 
    }
    printf("%d ogrencinin sinav ortlamasi = %f",N,(float)sum/N);
    
}

void giris(int ogrenciNo[],int N,int notlar[])
{
    for(int i = 0 ; i < N ; i++)
    {
        printf("%d.ogrencinin okul numarasini giriniz : \n",i+1);
        scanf("%d",&ogrenciNo[i]);
        
        printf("%d.ogrencinin notunu giriniz : \n",i+1);
        scanf("%d",&notlar[i]);
    }
    for(int i = 0 ; i < N ; i++)
    {
        printf("  %d   \n",ogrenciNo[i]);
    }
}


