#include <stdio.h>

int main()
{
     float x  = 7.88 ; 
     float* p ; 
     p = &x ; 
     printf("x in degeri = %.2f\n",x);
     printf("x in adresi = %p\n",&x);
     printf("pointerin tuttugu adres = %p\n",p);
     printf("pointerin hafizada tutuldugu yer = %p\n ",&p);
     printf("x in degerinin pointer ile gösterimi = %.2f\n\n\n",*p);

    char c = 'P' ; 
    char *ptr ; 
    ptr = &c;

    printf("c nin degeri = %c\n",c);
    printf("c nin adresi = %p\n",&c);
    printf("c nin adresi = %p\n",ptr);
    printf("c nin degeri = %c\n",*ptr);
    printf("pointerin bulundugu adress : %p",&ptr);

    return 0 ; 
}