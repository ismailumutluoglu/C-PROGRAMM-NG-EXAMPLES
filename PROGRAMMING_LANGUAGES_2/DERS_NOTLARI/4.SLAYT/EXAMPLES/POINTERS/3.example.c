#include <stdio.h>

int main()
{
    int xyz = 10 , k ; 
    int *p ; 

    p = &xyz;
    k = *p ; 

    printf("xyz nin degeri = %d\n",*p);
    printf("xyz nin adresi = %p\n",p);

    printf("k nin degeri = %d\n",*p);
    printf("k nin adresi = %p\n",p); // ? 
    return 0 ; 
}