#include <stdio.h>

int main()
{

    int number ; 

    printf("bir sayi giriniz : ") ;
    scanf("%d",&number) ;

    while(number<0)
    {
        printf("pozitif bir sayi giriniz : ");
        scanf("%d",&number);
    }

    printf("%d x %d = %d ",number,number,number*number);
    return 0  ;
}