// Aşağıda verilen prototipi kullanarak verilen bir katarda bir karakter
// arayan bir fonksiyon yazınız.
// char * ara (char *, char)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *arama_function(char*p,char aranan);
int main()
{
    char str[100];
    char* sonuc ; 
    printf("bir metin giriniz : ");
    gets(str);
    char  aranan;
    printf("aramak istediginiz harfi giriniz : ");
    scanf("%c",&aranan);
    sonuc = arama_function(str,aranan);
    if(sonuc==NULL)
        printf("girilen ifade metinde bulunamamistir...");
    else
        printf("%d",sonuc);
    return 0 ; 
}
char *arama_function(char* p ,char aranan)
{
    int i = 0 ; 
    if(aranan == '\0')
    {
        return p ;
    }
    while(*p != '\0')
    {
        if(*p == aranan)
        {
            return p ;
        }
        i++;
        p++;
    }
    return NULL;
}