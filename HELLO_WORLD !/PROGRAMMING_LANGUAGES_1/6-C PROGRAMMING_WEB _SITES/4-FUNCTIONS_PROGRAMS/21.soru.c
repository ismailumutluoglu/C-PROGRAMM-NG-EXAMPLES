#include <stdio.h>

int main()
{
    char str1[] = "aabcedef" ;
    char str2[] = "aabcedef" ;

    int i = 0 , flag = 1 ; 

    while(str1[i] != '\0' || str2[i] != '\0')
    {
        if(str1[i] != str2[i])
        {
            flag = 0 ;
            break;
        }
        i++;
    }

    if(flag)
    {
        printf("equal");
    }
    else
    {
        printf("not equal");
    }
    return 0 ; 
}