#include <stdio.h>
int main()
{
    int tek_toplam,cift_toplam,i;
    tek_toplam=0;
    cift_toplam=0;

    for(i=1;i<=500;i++)
    {
        if(i%2==0)
        {
            cift_toplam+=i;
        }
        else{
            tek_toplam+=i;
        }
    }
    if(cift_toplam-tek_toplam>0)
    printf("pozitif\t");
    else
    printf("negatif\t");
    printf("%d  %d",cift_toplam,tek_toplam);
    return 0;
}