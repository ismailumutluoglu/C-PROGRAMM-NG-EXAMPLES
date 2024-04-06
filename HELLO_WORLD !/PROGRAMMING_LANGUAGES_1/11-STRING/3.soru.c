// 3. Write a program in C to separate individual characters from a string.

// Test Data :
// Input the string : w3resource.com

// Expected Output :

// The characters of the string are : 
// w  3  r  e  s  o  u  r  c  e  .  c  o  m 

#include <stdio.h>

int main()
{
    char str[] = "w3resource.com" ;
    
    for(int i = 0 ; str[i] != '\0' ; i++)
    {
        printf("%c  ",str[i]);
    }
    return 0 ; 
}