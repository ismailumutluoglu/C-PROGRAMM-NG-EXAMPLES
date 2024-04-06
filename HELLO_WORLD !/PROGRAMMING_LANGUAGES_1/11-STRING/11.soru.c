// 11. Write a C program to sort a string array in ascending order.

// Test Data :
// Input the string : w3resource

// Expected Output :

// After sorting the string appears like : 
// 3ceeorrsuw 

#include <stdio.h>

void fonk(char str[]);

int main()
{
    char str[] = "w3resource";
    fonk(str) ; 
    return 0 ; 
}
void fonk(char str[])
{
    int i , j ; 
    char temp ; 
    for(i = 0 ; str[i] != '\0' ; i++)
    {
        for(j = i + 1 ; str[j] != '\0' ; j++)
        {
            if(str[i] >  str[j])
            {
                temp = str[i] ; 
                str[i] = str[j] ; 
                str[j] = temp ; 
            }
        }
    }
    printf("%s",str);
}