#include <stdio.h>
void len_function(char *p);
int main()
{
    char str[100];
    printf("bir metin giriniz : ");
    gets(str);
    len_function(str);
    return 0 ; 
}
void len_function(char *p)
{
    int i = 0 ; 
    while(p[i] !=  '\0')
    {
        i++;
    }
    printf("%s ifadesinin boyutu  %d uzunlugundadir",p,i);
}