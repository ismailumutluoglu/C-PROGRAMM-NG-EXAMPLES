#include <stdio.h>

int main()
{
    char str[] = "prog12ramm.iz";

    int i = 0 , j ; 

    while(str[i] != '\0')
    {
        while(!(str[i] >= 'a' && str[i] <= 'z'))
        {
            for(j = i ; str[j] != '\0' ; j++)
            {
                str[j] = str[j+1];
            }
        }
        i++;
    }

    puts(str);
    return 0 ; 
}