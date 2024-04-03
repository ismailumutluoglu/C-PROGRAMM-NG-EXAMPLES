#include <stdio.h>
void fonk1(void);

int a = 10 ; 

void fonk1(void)
{  
    a = 40 ; 
    printf("a = %d\n",a);
}

int main()
{
    printf("a = %d\n",a);
    int a = 30 ; 
    {
        printf("a = %d\n",a);
        fonk1();
        printf("a = %d\n",a);
    }
   
        printf("a = %d\n",a);
        fonk1();
        printf("a = %d\n",a);
    return 0 ; 
}