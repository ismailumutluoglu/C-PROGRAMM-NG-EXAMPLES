// welcome to w3resource.com

// en çok tekrar eden harfi buldur ve kaç kere oldugunu yazdir

#include <stdio.h>

int main()
{
    char str[] = "welcome to w3resource.com" ; 

    char character ;

    int control ;

    int max = 1 ; 

    for(int i = 0 ; str[i] != '\0' ; i++)
    {
        control = 1 ; 

        for(int j = 0 ; str[j] != '\0' ; j++)
        {
            if(i==j)
            continue;
            
            if(str[i] == str[j])
            {
               control++;
            }            
        }

        if(control>max)
        {
            max = control ; 
            character = str[i] ;
        }
    }

    printf("%c harfi en fazla tekrar eden harftir ve %d tane vardir ",character,max) ;

    return 0  ; 
}