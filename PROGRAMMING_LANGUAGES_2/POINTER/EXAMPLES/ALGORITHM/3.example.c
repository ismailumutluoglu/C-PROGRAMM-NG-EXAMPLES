#include <stdio.h>

int main()
{
    int N ; 
    printf("dizinin kac elemandan olusacagini giriniz : ");
    scanf("%d",&N);
    int dizi[N];
    for(int i=0;i<N;i++)
    {
        printf("dizinin %d.elemanini giriniz : ",i+1);
        scanf("%d",&dizi[i]);
    }
    int* ptr=dizi;
    for(int i=0;i<N;i++)
    {
        printf("dizi[%d] = %d\n",i,*(dizi+i));
    }
    return 0 ; 
}