#include <stdio.h>

int main()
{
    int a = 20 ; 
    printf("%d\n",a);
    {
        int a = 10 ; 
        printf("%d\n",a);
    }
    printf("%d",a);
    return 0 ; 
}