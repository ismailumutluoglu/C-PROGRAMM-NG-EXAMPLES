#include <stdio.h>

int main()
{
    // Write a program in C to count the total number of words in a string.

    char str[100] = "this is a string sentence";

     
    int i = 0 ; 
    int total = 1 ; 

    while(str[i] != '\0')
    {
        
         if(str[i] == ' ')
        {
            total++;
        }  
        i++;
    }
    
    printf("girilen cümlede (%s) toplam %d tane kelime vardir",str,total);

    return 0 ;
}