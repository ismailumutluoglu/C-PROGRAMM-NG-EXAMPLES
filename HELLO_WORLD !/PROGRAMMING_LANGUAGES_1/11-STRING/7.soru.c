// 7. Write a program in C to count the total number of alphabets, digits and special characters in a string.

// Test Data :
// Input the string : Welcome to w3resource.com

// Expected Output :

// Number of Alphabets in the string is : 21 
// Number of Digits in the string is : 1 
// Number of Special characters in the string is : 4 

#include <stdio.h>

int main()
{
    char str[] = " Welcome to w3resource.com" ;
    int alfabe = 0 ; 
    int digit = 0 ; 
    int special = 0 ; 

    for(int i = 0 ; str[i] != '\0' ; i++)
    {
        if((str[i] >= 'A' && str[i] <= 'Z') || str[i] >= 'a' && str[i] <= 'z')
        {
            alfabe++;
        }
        else if(str[i] >= '1' && str[i] < '10')
        {
            digit++;
        }

        else
        {
            special++;
        }
    }

    printf("%d\n%d\n%d",alfabe,digit,special);
    return 0 ;
}