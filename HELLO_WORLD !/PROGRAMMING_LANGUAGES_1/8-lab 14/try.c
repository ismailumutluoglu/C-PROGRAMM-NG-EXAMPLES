#include <stdio.h>

int main()
{
    char str[] = "123";

    for(int i = 0 ; str[i] != '\0' ; i++)
    {
        str[i]++;
    }
    printf("%s",str);
    return 0 ; 
}