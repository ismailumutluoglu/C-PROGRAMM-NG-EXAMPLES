// üs aldırma sorusu
#include <stdio.h>
int main()
{
    int a,b,sonuc,i;
    sonuc=1;
    printf("a sayisini giriniz");
    scanf("%d",&a);
    printf("b sayisini giriniz");
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        sonuc*=a;
    }
     printf("%d",sonuc);
     return 0;
}