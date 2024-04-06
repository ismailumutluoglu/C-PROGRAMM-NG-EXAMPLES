// 10. Write a program in C to find the maximum number of characters in a string.

// Test Data :
// Input the string :

// Expected Output :

// The Highest frequency of character 'e' 
// appears number of times : 4 

#include <stdio.h>

int main()
{
    char str[]= "merhabalar benim adim ismail umutluogluii" ; 
    int max = 1 ; 
    int i ,j ,counter ;
    char character ; 
    for(i = 0 ; str[i] != '\0';i++)
    {
        counter = 1 ;

        for(j = 0 ; str[j] != '\0' ; j++)
        {
            if(i != j )
            {
                if(str[i] == str[j])
                {
                    counter++ ; 
                    
                }
            }
        }
        if(counter > max )
        {
            max = counter ;
            character = str[i] ;
        }

    }

    printf("%d ",max);
    printf("%c  ",character) ;
    return 0 ;
}