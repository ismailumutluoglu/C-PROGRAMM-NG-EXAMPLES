#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "merhaba" ;
    char str2[] = "dunya" ;
    int lenght = 0,lenght1 = 0;

    lenght = strlen(str1);
    lenght1 = strlen(str2);
    strcat(str2,str1) ;
    printf("%d\n",lenght);
    printf("%d\n",lenght1);
    printf("%s ",str2);
    return 0 ;
}