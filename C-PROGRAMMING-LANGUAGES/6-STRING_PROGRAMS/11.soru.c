#include <stdio.h>

int main()
{
    char str[50] = "benim adim cafer" ;
    int i = 0 ;
    int  count = 0 ,lenght = 0 ;

    while(str[lenght] != '\0')
    {
        lenght++;
    }

    for(i = 0; i < 50 ;i++)
    {
        if(str[i]=='a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++ ;
        }
    }

    printf("%d",(count*100)/lenght);

    return 0 ;
}