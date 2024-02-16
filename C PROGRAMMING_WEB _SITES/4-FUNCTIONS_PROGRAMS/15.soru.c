#include <stdio.h>

int strLenght(char str[],int size);
void strReverse(char str[],int size);

int main()
{
    char str[100] ;
    printf("bir string ifade giriniz : ");
    gets(str);
    int len ;

    len = strLenght(str,100);
    printf("string ifadenin uzunlugu = %d\n",strLenght(str,100));

    strReverse(str,len);
    printf("stringin tersi = %s",str);
    return 0 ;
}

int strLenght(char str[],int size)
{
    int k = 0 ; 

    while(str[k] != '\0')
    {
        k++;
    }
    return k ;
}

void strReverse(char str[],int size)
{
    char temp[100];
    for(int i = 0 ; i < size/2;i++)
    {
        temp[i] = str[i];
        str[i] = str[size-i-1];
        str[size-i-1] = temp[i];
    }
}