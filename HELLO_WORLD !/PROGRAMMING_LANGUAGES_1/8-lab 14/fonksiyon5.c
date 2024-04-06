#include <stdio.h>

int main()
{
    char str[] = "benim adim ismail umutluoglu";
    char temp[100];

    for(int i = 0 ; str[i] != '\0'; i++)
    {
        for(int j = i+1 ; j < str[j] != '\0' ; j++)
        {

            if(str[i] == ' ' ||  str[j] == ' ')
            continue;
            if(str[i]>str[j])
            {
                temp[i]= str[i] ;
                str[i] = str[j] ;
                str[j] = temp[i] ;
            }
        }
    }    

    printf("%s",str);
    return 0 ;
}