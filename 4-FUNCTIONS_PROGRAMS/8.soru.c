#include <stdio.h>
int usAlma(int x , int y) ;
int main()
{
    int x,y;

    x = 5 ;
    y = 3 ; 

    printf("%d",usAlma(x,y));
    return 0 ; 
}

int usAlma(int x , int y )
{
    int sonuc = 1 , i ; 

    for(i=0;i<y;i++)
    {
        sonuc*=x;
    }

    return sonuc;
}