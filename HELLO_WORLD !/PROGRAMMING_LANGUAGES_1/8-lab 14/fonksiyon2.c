#include <stdio.h>

int sayma(char array[]);
int main()
{
    char str[] = "bu cumlede kac kelime var bulunuz" ;
    printf("%s cumlesinde :  %d tane kelime vardir\n\n",str,sayma(str));
    return 0 ; 
}

int sayma(char array[])
{
    int control =  0; 

    for(int i = 0 ; array[i] !='\0' ; i++)
    {
        if(array[i] == ' ' || array[i] == '\0')
        {
            control++;
        }
    }
    return ++control;
}