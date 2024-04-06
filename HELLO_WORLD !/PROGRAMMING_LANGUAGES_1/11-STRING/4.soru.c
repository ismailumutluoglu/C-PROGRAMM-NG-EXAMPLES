// 4. Write a program in C to print individual characters of a string in reverse order.

// Test Data :
// Input the string : w3resource.com

// Expected Output :

// The characters of the string in reverse are :
// m  o  c  .  e  c  r  u  o  s  e  r  3  w 

#include <stdio.h>

int main()
{
    char str[] = "w3resource.com" ;
    int i = 0 ; 
    char temp;

    while(str[i] != '\0')
    {
        i++;
    }

    for(int j = 0 ; j < i/2 ; j++)
    {
        temp = str[j];
        str[j] = str[i-j-1];
        str[i-j] = temp ;
    }
    printf("%s",str);
    return 0 ; 
}