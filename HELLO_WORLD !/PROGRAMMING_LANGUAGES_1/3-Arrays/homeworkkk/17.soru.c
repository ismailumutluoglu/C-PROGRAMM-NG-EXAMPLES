/* Fibonacci serisinin ilk 10 terimini ekrana basan algoritma ve akış
diyagramını çiziniz.*/
#include <stdio.h>
int main()
{
    int a,b,c,i;
    a=0;
    b=1;
    printf("%d\t",b);
    for(i=0;i<7;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\t",c);
    }
    return 0;
} 


