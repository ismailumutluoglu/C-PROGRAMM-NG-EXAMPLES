#include <stdio.h>
 
int main()
{
    int *ptr;
    int x;
    
    ptr = &x;
    *ptr = 0;
 
    printf(" x = %d\n", x); 
    printf(" *ptr = %d\n", *ptr); 
 
    *ptr += 5;
    printf(" x  = %d\n", x); 
    printf(" *ptr = %d\n", *ptr); 
 
    (*ptr)++; // önemli bir detay *ptr = * ptr + 1 anlamına geliyor . 
    printf(" x = %d\n", x); 
    printf(" *ptr = %d\n", *ptr); 
 
    return 0;
}