#include <stdio.h>
extern int a , b ;
void fonk(void);
int main()
{
    a = 5 ; 
    b = 4 ; 
    a++; //6
    b++; //5

    printf("%d\n",a); //6
    printf("%d\n",b); //5
    fonk();
    return 0 ; 
}

void fonk(void)
{
    printf("%d\n",a); //6
    printf("%d",b); // 5
}