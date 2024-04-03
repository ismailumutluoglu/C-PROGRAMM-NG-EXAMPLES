#include <stdio.h>

void callFunction(void);

int main()
{
    callFunction();
    return 0 ; 
}

void callFunction(void)
{
    for(int i = 0 ; i < 10 ; i++)
    {
        static int a = 5 ; 
        a++;
        printf("%d ",a);
    }
}