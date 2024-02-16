#include <stdio.h>
int kareAl(int i);
int main()
{
    int i ;
    for(i=0;i<=10;i++)
    {
        printf("%d*%d=%d \n",i,i,kareAl(i));
    }
    return 0 ; 
}

int kareAl(int i )
{
    return i*i;
}