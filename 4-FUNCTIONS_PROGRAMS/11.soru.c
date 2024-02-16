#include <stdio.h>

void reverse(char name[],int lenght);

int main()
{
    int lenght ;
    char name[] = "ismail" ;

    lenght = 0 ; 

    while(name[lenght] != '\0')
    {
        lenght++;
    }

    reverse(name,lenght);
}
void reverse(char name[],int lenght)
{
    int i ; 
    char temp[lenght];
    for(i = 0 ; i < (lenght)/2 ; i++)
    {
        temp[i] = name[i] ;
        name[i] = name[lenght-i-1];
        name[lenght-i-1] = temp[i] ;
    }
    printf("%s",name);
}
