// 6. Write a program in C to compare two strings without using string library functions.

#include <stdio.h>

int main()
{
    char str1[] = "ismail" ;
    char str2[] = "ismail" ;

    int i , j , flag ;  

    for(i = 0 ; str1[i] != '\0' ; i++)
    {
        flag = 1 ; 

        for(j = i ; str2[j] != '\0' ; j++)
        {
            if(str1[i] != str2[j])
            {
               flag = 0 ; 
               break;
            }
            break;
        }

        if(flag == 0)
        {
            break;
        }
    } 

    if(flag == 0)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
    return 0 ; 
}