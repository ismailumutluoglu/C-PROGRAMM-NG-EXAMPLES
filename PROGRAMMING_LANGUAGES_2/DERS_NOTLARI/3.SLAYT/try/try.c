// girilen sayinin kaç basamakli oldugunu bulan program

#include <stdio.h>
int fun_digit(int N);
int main()
{
    int number ; 

    printf("bir sayi gir : ");
    scanf("%d",&number);

    printf("girilen %d sayisi %d basamaklidir. ",number,fun_digit(number));
    return 0 ; 
}
int fun_digit(int N)
{
    if(N != 0)
    {
        return 1 + fun_digit(N/10) ; 
    }
    return 0 ;
}