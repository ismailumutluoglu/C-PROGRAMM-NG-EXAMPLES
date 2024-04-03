#include <stdio.h>

int main()
{
    int a , b , c ; 
    char *p = 0 ;  // char 1 byte ;
    int *q = 0 ; // int 4 byte ;
    double *s = 0 ; // double 8 byte ; 
    a = (p + 3); // p nin adresini 3 * 1  byte arttır = 3
    b = (q + 2); // q nin adresini 2 * 4  byte arttır = 8 
    c = (s + 1); // s nin adresini 1 * 8 byte arttır = 8 ; 
    printf("%d %d %d",a,b,c);
    return 0 ; 
}