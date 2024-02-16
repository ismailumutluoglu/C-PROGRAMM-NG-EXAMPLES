// Write a program in C to count the total number of alphabets, digits and special characters in a string

#include <stdio.h>

int main()
{
    char str[] = "Welcome to w3resource.com" ;

    int alfabe = 0 ;
    int rakam = 0 ; 
    int special = 0 ; 
    int i = 0 ; 

    while(str[i] != '\0')
    {
        if(str[i] >='a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
        {
            alfabe++;
        }
        else if(str[i] >= '0' && str[i] <= '10')
        {
            rakam++;
        }
        else
        {
            special++;
        }
        i++;
    }

    printf("harf = %d\n",alfabe);
    printf("rakam = %d\n",rakam);
    printf("özel ifade = %d",special);
    return 0 ; 
}