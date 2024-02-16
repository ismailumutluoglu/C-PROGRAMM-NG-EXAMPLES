#include <stdio.h>
void character(char varName[]);

int main()
{
    char varName[] = "benim adim cafer" ;
    character(varName);
    return 0 ; 
}
void character(char varName[])
{
    int i,k;
    k = 0 ; 

    while(varName[k] != '\0')
    {
        k++;
    }

    printf("girilen cumle %d karakterden olusmaktadir\n",k);
    printf("dizi : %s",varName);
}