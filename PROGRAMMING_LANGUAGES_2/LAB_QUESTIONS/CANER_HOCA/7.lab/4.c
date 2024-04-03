//bir metindeki veya cümledeki kelimeleri sayan c programi dynamic memmory allocation
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *str;
    str = (char*)malloc(100*sizeof(char));
    printf("cümleyi giriniz: ");
    gets(str);
    int i = 0 ,j;
    while(str[i] != '\0')
    {
        i++;
    }
    char* copy_str;
    copy_str = (char*)malloc((i+1)*sizeof(char));
    if(copy_str==NULL)
    {
        printf("YETERLI HAFIZA ALANI BULUNAMAMISTIR");
    }
    for(j = 0 ; j < i ; j++)
    {
        copy_str[j] = str[j];
    }
    copy_str[i] = '\0' ;

    i = 0 ;
    while(*copy_str != '\0')
    {
        if(*copy_str == ' ')
            i++;
        copy_str++;
    }
    printf("\n%s cümlesinde %d kelime vardir",str,i+1);
    return 0 ;
}