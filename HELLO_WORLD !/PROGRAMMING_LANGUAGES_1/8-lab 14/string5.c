#include <stdio.h>
void birlestirme(char array1[],char array2[]);
int main()
{
    char str1[] = "this is string one " ;
    char str2[] = "this is string two" ;
    birlestirme(str1,str2);
    return 0 ; 
}

void birlestirme(char array1[],char array2[])
{
    int i = 0 , j = 0 ; 

    while(array1[i] != '\0')
    {
        i++;
    }

    while(array2[j] != '\0')
    {
        array1[i] = array2[j] ;
        j++;
        i++;
    }
    printf("%s",array1) ;
}   