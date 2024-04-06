#include <stdio.h>

int main()
{
    int toplam = 0 ;
    for(int i = 1 ; i <=5 ; i++)
    {
        toplam+=i;
    }

    printf("1'ben 5'e kadar olan sayilarin toplami =  %d",toplam);
    return 0 ; 
}