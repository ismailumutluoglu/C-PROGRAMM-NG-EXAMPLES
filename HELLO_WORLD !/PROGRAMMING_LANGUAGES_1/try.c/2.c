#include <stdio.h>

int a ; 
void fonk() ;
int main()
{
    a = 10 ; 
    printf("%d\n",a);
    fonk();
    printf("%d",a);
    return 0 ;
}

void fonk(void)
{
    a = 20 ;
    printf("%d\n",a); 
}