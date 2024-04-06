// x - 1 --x den farklıdır...
#include <stdio.h>
void fun( int x ) ;
int main()
{
    int a = 4 ; 
    fun(a);

    return 0 ;
}

void fun( int x )
{
    if( x > 0 )
    {
        fun(x-1); // x-1 de x'i 1 azaltırız ama x in degeri bu satırda hala x'tirç bir sonraki satırlarda x - 1 dir !!!
        printf("%d ",x);
        fun(x-1);
    }
}