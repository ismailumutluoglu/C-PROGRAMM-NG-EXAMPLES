// 9. Write a program in C to reverse a string using recursion. >
// Test Data :
// Input any string: w3resource
// Expected Output:

// The reversed string is: ecruoser3w   

#include <stdio.h>

int reversed(char str[],int i);

int main()
{
    char str[] = "ismail";
    int i = 0 ; 

    while(str[i] != '\0')
    {
        i++;
    }

    printf("%c",reversed(str,i-1));
    return 0 ;
}

int reversed(char str[],int i)
{
    if(i >= 0)
    {
        printf("%c",str[i]);
        return reversed(str,i-1);
    }
    return 0 ;
}