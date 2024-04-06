// 1. Write a program in C to input a string and print it.

// Test Data :
// Input the string : Welcome, w3resource

// Expected Output :

// The string you entered is : Welcome, w3resource 

#include <stdio.h>

int main()
{
    char str[100] ;
    printf("bir cümle giriniz : ");
    gets(str);

    printf("%s",str);
    return 0 ; 
}