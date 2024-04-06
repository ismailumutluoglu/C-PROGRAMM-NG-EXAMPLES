#include <stdio.h>

void yildiz(char dizi[]);

int main()
{
    char str[100] ; 

    printf("enter a sentence");
    gets(str);
    yildiz(str);
    return 0 ; 
}
void yildiz(char dizi[])
{
    int i ; 

    // while(dizi[i] != '\0')
    // {
    //     if(dizi[i] == 'a' || dizi[i] == 'e' || dizi[i] == 'i' || dizi[i] == 'o' || dizi[i] == 'u' || dizi[i] == 'A' || dizi[i] == 'E' || dizi[i] == 'I' || dizi[i] == 'O' || dizi[i] == 'U' )
    //     {
    //         dizi[i] = '*' ;
    //     }
    //     i++;
    // }

    for(i = 0 ; dizi[i] != '\0'; i++)
    {
        if(dizi[i] == 'a' || dizi[i] == 'e' || dizi[i] == 'i' || dizi[i] == 'o' || dizi[i] == 'u' || dizi[i] == 'A' || dizi[i] == 'E' || dizi[i] == 'I' || dizi[i] == 'O' || dizi[i] == 'U' ) 
        {
            dizi[i] = '*';
        }
    }
    printf("%s",dizi);
}