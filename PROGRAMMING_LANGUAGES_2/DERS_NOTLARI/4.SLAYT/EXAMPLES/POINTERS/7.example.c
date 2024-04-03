#include <stdio.h>

int main()
{
    int elm ; 
    int month[12] ; 
    int *ptr ; 
    ptr =  month ; 
    elm = ptr[3] ; 
    ptr = month + 3 ; 
    ptr = &month[3] ; 
    elm = (ptr+2)[2] ; 
    elm = *( month + 3 );
    ptr = month ; 
    elm = *( ptr + 2 );
    elm = *( month + 1 ) ; 
    return 0 ; 
}