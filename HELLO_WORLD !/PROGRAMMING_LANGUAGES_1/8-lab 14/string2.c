#include <stdio.h>

int main()
{
    char str[] = "kartal kalkar dal sarkar dal sarkar kartal kalkar";
    char search[100];
    int i = 0 ; 
    int find = 0 ; 

    

    while(str[i] != '\0')
    {
        if(str[i] == 'k' && str[i+1] == 'a' && str[i+2] == 'r')
        {
            find++;
        }
        i++;
    }

    printf("kar kelimesi %d defa gecmistir",find);
    return 0  ;
}