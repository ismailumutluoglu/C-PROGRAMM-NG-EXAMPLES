#include <stdio.h>

int a = 10 ; 

void fonk1(int a );

int main()
{
    {

    int a = 50 ; 
    printf("a = %d\n",a);
    fonk1(a) ; 

    }
    
    printf("a = %d\n",a);

    return 0 ; 
}

void fonk1(int a)
{
    a++ ; 
    printf("a = %d\n",a);
}