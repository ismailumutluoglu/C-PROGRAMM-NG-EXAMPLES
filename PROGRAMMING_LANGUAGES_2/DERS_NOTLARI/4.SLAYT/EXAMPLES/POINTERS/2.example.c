#include <stdio.h>

int main()
{
    int i = 4 ; 
    int *iptr ; 
    iptr = &i ; 
    *iptr = 8 ;

    printf("i degiskenini degeri = %d\n",i);
    printf("iptr adresinin icerigi = %d",*iptr);
    
    return 0 ; 
}