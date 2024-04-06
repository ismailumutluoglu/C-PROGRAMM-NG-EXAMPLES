/* 10 ile 1000 arasındaki tam kare sayıları ekrana yazdıran programın
algoritma ve akış diyagramını çiziniz. */
#include <stdio.h>
int main()
{
    int i,j;

    for(i=10;i<=1000;i++)
    {
        for(j=1;j<=i/2;j++)
        {
            if(j*j==i)
            {
                printf("%d\t",i);
            }
        }
    }
    return 0;
}