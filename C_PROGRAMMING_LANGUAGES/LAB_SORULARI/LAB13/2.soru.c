// 2- Fonksiyona gönderilen string içerisindeki karakterleri alfabetik sıraya sokan programı yazınız. 
// Write a program that puts the characters in the string sent to the function in alphabetical order. 
// Örnek giriş 
// : 
// Sonu : 
// “Ahmet merhaba” 
// “Aaabe ehhmmrt”

#include <stdio.h>

int main()
{
    char str[] = "Ahmet merhaba" ; 
    int temp ; 
    for(int i = 0 ; str[i] != '\0' ; i++)
    {
        for(int j = 0 ; str[j] != '\0' ; j++)
        {
            if(str[i] == ' ')
            {
                continue ; 
            }
            if(i != j )
            {
                if(str[i] < str[j])
                {
                    temp = str[i] ;
                    str[i] = str[j] ;
                    str[j] = temp ; 
                }
            }
        }
    }

    printf("%s",str);

    return 0 ; 
}