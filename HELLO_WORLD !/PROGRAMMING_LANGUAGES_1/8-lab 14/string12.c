#include <stdio.h>

int main()
{
    char str[] = " c programming languages" ; 

    for(int i = 0 ; i < str[i] != '\0' ; i++)
    {
        if(str[i] == ' ')
        {
            printf("\n");
            
            for(int j = i + 1 ; str[j] != '\0' && str[j] != ' ' ; j++)
            {
                printf("%c",str[j]);
            }
        }
    }
    return 0 ; 
}