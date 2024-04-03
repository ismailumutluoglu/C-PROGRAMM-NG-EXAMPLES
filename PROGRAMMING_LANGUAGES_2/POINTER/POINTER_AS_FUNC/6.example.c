#include <stdio.h>
#include <stdlib.h>
void rectangle(int a , int b, int* area,int* perimeter);
int main()
{
    int x,y,alan,cevre;
    printf("dikdörtgenin kisa kenar uzunlugunu giriniz  : ");
    scanf("%d",&x);
    printf("dikdörtgenin uzun kenar uzunlugunu giriniz : ");
    scanf("%d",&y);
    rectangle(x,y,&alan,&cevre);
    printf("alan = %d , cevre = %d",alan,cevre);
    return 0 ; 
}
void rectangle(int a , int b, int* area,int* perimeter)
{
    *area = a * b ; 
    *perimeter = 2*(a+b) ; 
}