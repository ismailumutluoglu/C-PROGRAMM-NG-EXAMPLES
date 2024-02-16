#include <stdio.h>

int main()
{
    char str[50] = "benim adim cafer kaşlarimin rengini bilmiyorum" ;
    char character = 'i' ;
    int  count = 0 ; 
    for(int i=0;i<50;i++)
    {
        if(str[i] == character)
        {
            count ++;
        }
    }

    printf("%d",count);
    return  ; 
}