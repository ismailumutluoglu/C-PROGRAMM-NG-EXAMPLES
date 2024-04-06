#include <stdio.h>
extern int a , b ;
void fonk(void);
int main()
{
    a = 5 ; 
    b = 4 ; 
    a++; 
    b++; 

    printf("%d\n",a); 
    printf("%d\n",b);
    fonk();
    return 0 ; 
}

void fonk(void)
{
    printf("%d\n",a); 
    printf("%d",b); 
}