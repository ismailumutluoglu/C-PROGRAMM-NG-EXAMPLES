// 2. Write a program in C to find the length of a string without using library functions.

// Test Data :
// Input the string : w3resource.com

// Expected Output :

// Length of the string is : 15 

#include <stdio.h>

int main()
{
    char str[50] = "ismail" ;
    int i = 0 ; 

    while(str[i] != '\0')
    {
        i++;
    }
    printf("%d",i);
    return 0 ;
}