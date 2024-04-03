// calculate length of  string using pointer
#include <stdio.h>
void length_of_string(char* ptr);
int main()
{
    char str[50];
    printf("bir string ifade giriniz : ");
    gets(str);
    length_of_string(str);
    return 0 ; 
}
void length_of_string(char* ptr)
{
    int i = 0 ;
    while(*ptr != '\0')
    {
        i++;
        ptr++;
    }
    printf("girilen string metin %d karakter icermektedir",i);
}