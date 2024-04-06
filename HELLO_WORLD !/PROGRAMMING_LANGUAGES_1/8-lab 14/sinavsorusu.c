#include <stdio.h>

void control(char array1[],char array2[]);

int main()
{
    char str1[] = "Umut";
    char str2[] = "Umut"; 

    control(str1,str2);

    return 0 ; 
}

void control(char array1[],char array2[])
{
    int k ;
    int flag ;
    for(int i = 0 ; array1[i] != '\0' ; i++)
    {
        k = i ;
        flag = 0 ; 
        int j ;
        for(int  j = 0 ; array2[j] != '\0' ; j++)
        {
            if(array1[k] == array2[j])
            {
                flag = 1 ; 
                k++;
            }
            else
            {
                flag = 0 ; 
                break ;
            }
        }
        if(flag == 0)
        {
            break;
        }
        if(array2[j] == '\0')
        {
            break;
        }
    }

    if(flag==1)
    {
        printf("esit");

    }
    if(flag==0)
    {
        printf("esit degil");
    }
}