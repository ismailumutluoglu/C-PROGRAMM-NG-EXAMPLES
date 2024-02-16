#include <stdio.h>
#include <string.h>


int main()
{
    char Array[30]= "Geeks For Geeks";
    char temp[30];

    int i = 0,j=0;

    int lenght = 0;

    lenght=strlen(Array);

    
    // while(Array[j] != '\0')
    // {
    //     j++;
    // }

    for(i=0;i<lenght/2;i++)
    {
        temp[i]=Array[i];
        Array[i]=Array[lenght-i-1];
        Array[lenght-i-1] = temp[i];
    }

    printf("%s",Array);
    return 0 ;

}