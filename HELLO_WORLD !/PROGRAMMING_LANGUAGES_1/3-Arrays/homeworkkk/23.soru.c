/*1'den 500'e kadar olan tamsayıların toplamını bulan programın
algoritma ve akış diyagramını çiziniz*/
#include <stdio.h>
int main()
{
    int sum,i;

    for(i=1;i<=500;i++)
    {
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}