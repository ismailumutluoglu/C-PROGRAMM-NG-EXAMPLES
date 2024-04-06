// C Programlama Dili Recursive Çarpma İşlemi (Toplama İşlemi ile) Örneği

#include <stdio.h>

int carpma_islemi(int a , int b) ; 

int main()
{
    int a = 3  , b = 0 ; 
    printf("%d",carpma_islemi(a,b));
    return 0 ; 
}

int carpma_islemi(int a , int b)
{
    if(b > 0)
    return a + carpma_islemi(a ,b-1) ;
    if(b == 0)
    return 1  ;
}