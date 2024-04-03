#include <stdio.h>

int main()
{
    int i ; 
    int *iptr;
    i = 5 ; 
    iptr = &i ; 

    printf("i adresi : %p\n",&i);
    printf("iptr degeri = %p\n",iptr);

    printf("i degeri = %d\n",i); // 5
    printf("*iptr degeri %d",*iptr); // 5 

    return 0 ; 
}