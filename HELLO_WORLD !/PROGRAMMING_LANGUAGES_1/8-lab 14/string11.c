#include <stdio.h>

int main()
{
    char str[] = "a" ;

    for(int i = 0 ; i < str[i] != '\0' ; i++)
    {
        if(str[i] >= '0' && str[i] <='9')
        {
            printf("%c ifadesi sayidir\n",str[i]);
        }
        else
        {
            printf("sayi degildir");
        }
    }
    return 0 ; 
}