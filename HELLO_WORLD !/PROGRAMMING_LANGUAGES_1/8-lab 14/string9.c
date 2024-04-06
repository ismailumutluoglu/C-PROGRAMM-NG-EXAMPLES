//it is a string with smallest and largest word . 

#include <stdio.h>

int main()
{   
    char str[] = "ismail" ;
    char temp[50] ;
    for(int i = 0 ; i < 3 ; i++)
    {
        temp[i] = str[i] ;
        str[i] = str[6-1-i];
        str[6-1-i] = temp[i];
    }
    printf("%s",str);
    return 0 ; 
}