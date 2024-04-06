// 1. Write a C program to sort a string array in ascending order.

// Test Data :
// Input the string : w3resource

// Expected Output :

// After sorting the string appears like : 
// 3ceeorrsuw 

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "ismail" ;
    int i , j , k ;
     k = strlen(str);
    char temp[100] ;

    for( i = 0 ; str[i] != '\0' ; i++)
    {
           
            for(j = i+1 ; j < k ; j++)
            {
                if(str[i] > str[j])
                {
                    temp[i] = str[i] ;
                    str[i] = str[j];
                    str[j] = temp[i];
                }       
            }    
        
        
    }
    
    printf("%s",str);
    return 0 ; 
}