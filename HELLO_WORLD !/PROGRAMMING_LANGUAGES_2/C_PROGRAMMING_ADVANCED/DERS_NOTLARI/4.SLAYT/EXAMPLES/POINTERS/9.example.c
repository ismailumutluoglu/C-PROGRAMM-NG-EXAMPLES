#include <stdio.h>

int main()
{
    char *a = "1234567890" ; // her pointer bir dizi terside geçerli . . . 
    char x[10] ; 
    char *p1 , *p2 ; 

    // printf("%d",a);
    printf("%s\n",a);

    p1 = a ; 
    p2 = x ;  // x[0] adresini atadı

    while(*p1 != '\0')
    {
        *p2 = *p1 ; 
        p1++;
        p2++;
    }
    *p2 = *p1 ; 

    printf("%s\n",x);

    return 0 ; 
}