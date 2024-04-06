#include <stdio.h>

int main()
{
    char str1[] = "my name is ismail" ; 
    char str2[100];

    int uzunluk = 0 , i ;

    while(str1[uzunluk] != '\0')
    {
        uzunluk++;
    }

    for(i = 0 ; str1[i] != '\0' ; i++)
    {
        str2[i] = str1[i];
    }

    str2[i] = '\0';
    puts(str2);
    return 0 ; 
}