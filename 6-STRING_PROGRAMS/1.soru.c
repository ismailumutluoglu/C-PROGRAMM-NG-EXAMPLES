#include <stdio.h>

int main()
{
    char str1[20] = "Hello";
    char str2[20] = "World";
    char str3[20] ;

    int i,j;
    i = j = 0;

    while(str1[i] != '\0')
    {
        str3[j] = str1[i] ;
        i++;
        j++;
    }

    i = 0;
    while(str2[i] != '\0')
    {
        str3[j] = str2[i] ;
        i++;
        j++;
    }
    
    printf("%s\n",str1);
    printf("%s\n",str2);
    printf("%s",str3);

    return 0;
}