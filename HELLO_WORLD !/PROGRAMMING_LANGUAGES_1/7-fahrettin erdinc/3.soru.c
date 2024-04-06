#include <stdio.h>

int main()
{
    int toplam = 0 ; 
    int N  , i ; 

    printf("bir sayi giriniz : ");
    scanf("%d",&N);

    while(N<0)
    {
        printf("pozitif bir sayi giriniz : ");
        scanf("%d",&N);
    }

    for ( i = 1; i <= N; i++)
    {
        if(i%2 == 0 )
        toplam += i ;
    }
    
    printf("%d",toplam);
    return 0 ; 
}