// strcat fonksiyonu
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50];
    char str2[40];
    strcpy(str1,"ismail");
    strcpy(str2,"umutluoglu");
    strcat(str2,str1);
    printf("%s",str2);
    return 0 ; 
}