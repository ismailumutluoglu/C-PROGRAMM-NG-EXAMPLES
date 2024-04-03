#include <stdio.h>
#include <string.h>

int reverse_Function(char array[],int uzunluk) ;

int main()
{
    char str[] = "ramazan" ;
    int len ; 

    len = strlen(str);
    reverse_Function(str,len-1);

    return 0 ; 
}

int reverse_Function(char array[] ,int uzunluk )
{
    if(uzunluk >= 0)
    {
        printf("%c",array[uzunluk]);

        return reverse_Function(array,uzunluk-1);
    }
    return 0 ; 
}