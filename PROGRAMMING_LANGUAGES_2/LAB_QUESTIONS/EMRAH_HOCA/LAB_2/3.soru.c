#include <stdio.h>

int main()
{
    int *ptr , a = 10 ; 
    ptr = &a ; // ptr a nın adresi 
    *ptr += 1 ; // *ptr = *ptr + 1 yani a = 11 ; *ptr = 11 olacak
    printf("%d,%d\n",*ptr,a); // 11 , 11 olacak
    return 0 ; 
}