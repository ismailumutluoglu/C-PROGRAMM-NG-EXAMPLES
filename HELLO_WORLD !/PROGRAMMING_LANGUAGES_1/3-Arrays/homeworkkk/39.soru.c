#include <stdio.h>
int main()
{
    int i;

    for(i=100;i<=200;i++)
    {
        if((3*i+2)%5==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}