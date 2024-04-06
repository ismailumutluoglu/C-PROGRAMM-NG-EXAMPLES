#include <stdio.h>

int main()
{
    int x = 5 ; 
    int* ptr ; 
    ptr = &x ; 
    printf("%d\n",x);
    printf("%d\n\n",&x);

    ptr++;
    printf("%d\n",x);
    printf("%d",ptr);
    return 0 ; 
}