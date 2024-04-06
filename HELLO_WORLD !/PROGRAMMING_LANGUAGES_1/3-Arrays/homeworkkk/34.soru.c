// girilen dört basamakl sayilardan ilk iki basamağı ile son iki basamağının toplamının karesi sayının kendine eşit olan 
//sayılara orijinal sayilar denir.girilen sayinin orijinal olup olmadığını buök,
#include <stdio.h>
int main()
{
    int x,i,number,first,final;
    
    for( i=1000;i<=9999;i++)
    {
         first=i/100;
         final=i%100;
        if((first+final)*(first+final)==x)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}