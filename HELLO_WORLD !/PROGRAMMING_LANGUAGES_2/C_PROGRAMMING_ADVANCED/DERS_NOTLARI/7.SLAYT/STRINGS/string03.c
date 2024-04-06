// strcmp fonksiyonu string ifadelerin kıyaslanmasında kullanılır . 
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50];
    char str2[50];
    strcpy(str1,"ahmet");
    strcpy(str2,"mehmet");
    int ret ; 
    ret = strcmp(str1,str2);
    if(ret > 0)
        printf("str1>str2");
    else if(ret < 0 )
        printf("str2 > str1");
    else
        printf("str1 = str2");
    return 0 ; 
}