#include <stdio.h>
int uzunluk(char str[]);
void harfBulma(char str[]);

int main()
{
    char str[] = "Adana Tas Kopru Balcali" ;
    harfBulma(str);
    return 0 ; 
}

int uzunluk(char array[])
{
    int uzunluk = 0 ; 
    while(array[uzunluk] != '\0')
    {
        uzunluk++;
    }
    return uzunluk ;
}

void harfBulma(char array[])
{
    int i = 0 ; 

    int len = uzunluk(array);

    while(array[i] != '\0')
    {
        if(array[i] == ' ')
        {
            printf("%c",array[i-1]);
        }
        i++;
    }
      printf("%c",array[len-1]);
}