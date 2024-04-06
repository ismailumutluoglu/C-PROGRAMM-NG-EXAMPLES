// 19. Write a program in C to combine two strings manually.

// Test Data :
// Input the first string : this is string one
// Input the second string : this is string two


#include <stdio.h>

int main()
{
    char str1[100] = "this is string one ";
    char str2[100] = "this is string two";

    int uzunluk = 0 ; 

    while(str1[uzunluk] != '\0')
    {
        uzunluk++;
    }

    int i = 0 ; 

    while(str2[i] != '\0')
    {
        str1[uzunluk] = str2[i] ; 
        i++;
        uzunluk++;
    }

    str1[uzunluk]  = '\0' ;

    printf("%s",str1);
    return 0 ; 
}