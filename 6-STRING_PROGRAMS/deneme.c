// Bilgisayar
// ilgisayarB
// lgisayarBi
// gisayarBil
// isayarBilg
// sayarBilgi
// ayarBilgis
// yarBilgisa
// arBilgisay
// rBilgisaya
// Bilgisayar

#include <stdio.h>

int main()
{
    char array[15]="Bilgisayar",temp,key;
    int i,j,k;

    k = 0 ; 

    while(array[k] != '\0')
    {
        k++;
    }

    for(i = 0 ; i < k ; i++)
    {
        key = array[0];
        temp = array[1];

        for(j=1;j<k-1;j++)
        {
            array[j]=array[j+1];
        }

        array[k-1] = key ;
        array[0] = temp;

        printf("%s",array);
        printf("\n");
    }
    return 0 ;
}