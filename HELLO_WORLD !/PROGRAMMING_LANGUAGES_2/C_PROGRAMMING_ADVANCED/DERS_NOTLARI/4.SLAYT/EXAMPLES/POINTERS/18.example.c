#include <stdio.h>

int main()
{
    char myLetter[5] = {'x','y','z','a','f'} ; 
    int myNumbers[5] = {7,1,19,23,5} ;
    int i ; 
    for(int i = 0 ; i < 5 ; i++)
    {
        printf(" Adres : myLetter[%i] = %p  ",i,(myLetter+i)); 
    }
    printf("\n\n") ; 
    for(int i = 0 ; i < 5 ; i++)
    {
        printf("myLetter[%d] = %c  ",i,*(myLetter+i)); 
    }
    printf("\n\n") ; 
    for(int j = 0 ; j < 5 ; j++)
    {
        printf("Adres : myNumbers[%i] =%p ",j,(myNumbers+j));
    }
    printf("\n\n") ; 
    for(int j = 0 ; j < 5 ; j++)
    {
        printf("myNumbers[%d] =%d ",j,*(myNumbers+j));
    }
    return 0 ; 
}