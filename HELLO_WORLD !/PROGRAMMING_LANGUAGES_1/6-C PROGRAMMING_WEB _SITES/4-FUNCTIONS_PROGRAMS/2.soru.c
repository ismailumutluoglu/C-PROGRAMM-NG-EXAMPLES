#include <stdio.h>

int usAlma(int x , int y );

int main()
{
    int a,b;
    printf("iki sayi giriniz");
    scanf("%d %d",&a,&b);
    printf("%d",usAlma(a,b));
    return 0 ; 
}

int usAlma(int x , int y )
{
    int i , sonuc = 1 ;
    
    for(i = 0 ; i < y ; i++)
    {
         sonuc *=x ;
    }
    return sonuc ;
}