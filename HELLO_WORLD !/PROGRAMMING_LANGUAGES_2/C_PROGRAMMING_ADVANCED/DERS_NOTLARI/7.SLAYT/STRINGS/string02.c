// Strlen fonksiyonu
#include <stdio.h>
#include <string.h>

// int main()
// {
//     char str[50];
//     strcpy(str,"This is tutorialspoint.com");
//     int len = strlen(str);
//     printf("%s metinin uzunlugu = %d",str,len);
//     return 0 ; 
// }
int strlength(char* str);
int main()
{
    char str[50];
    strcpy(str,"This is tutorialspoint.com");
    int len = strlength(str);
    printf("%d",len);
    return 0 ; 
}
int strlength(char* str)
{
    int len = 0 ; 
    while(*str++ != '\0')
    {
        len++;
    }
    return len ; 
}