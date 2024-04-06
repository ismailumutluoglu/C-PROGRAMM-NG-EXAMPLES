#include <stdio.h>

int main()
{
    char array[]="Ismail Umutluoglu Bayburt ";

    int i = 0;

    while(array[i] != '\0')
    {
        i++;
    }

    for(int j=0;j<i;j++)
    {
        if(j==0 && array[j] != ' ')
        {
            printf("%c ",array[j]);
        }
        else if(j>0 && array[j-1] == ' ')
        {
            printf("%c ",array[j]);
        }

    }
    return 0 ;
}