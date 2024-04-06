#include <stdio.h>

int main()
{
    int i, x , y ,toplam = 0 ;

    printf("enter x : ");
    scanf("%d",&x);

    printf("enter y : ");
    scanf("%d",&y);

    for(i = x+1 ; i < y ; i++)
    {
        toplam += i ; 
    }
    printf("%d",toplam);
    return 0 ; 
}