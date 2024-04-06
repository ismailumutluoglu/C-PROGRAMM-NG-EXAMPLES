// 5. Write a program in C to count the total number of words in a string.

// Test Data :
// Input the string : This is w3resource.com

// Expected Output :

// Total number of words in the string is : 3 

#include <stdio.h>

int main()
{
    char str[] = "benim adim cafer kaşlarimin rengini bilmiyorum" ;
    int i ,j = 0 ;

    for(i = 0 ; str[i] != '\0' ; i++)
    {
        if(str[i] == ' ')
        {
            j++;
        }
    }
    printf("%d",j+1);
    return 0 ; 
}