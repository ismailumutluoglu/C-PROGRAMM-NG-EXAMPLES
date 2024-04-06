#include <stdio.h>

int main()
{
    char str1[50] ; 
    char str2[20] ; 

    printf("bir cümle giriniz : ");
    gets(str1);

    printf("aratmak istediginiz kelimeyi giriniz : ");
    gets(str2);

    int flag ; 
    int j ;

    for(int i = 0 ; i < str1[i] != '\0' ; i++)
    {
        int k = i  ;
        flag = 0 ; 

        for( j = 0 ;  str2[j] != '\0' ; j++)
        {
            if ( str2[j] == str1[k] )
            {
                flag = 1 ; 
                k++;
            }
            else
            {
                flag = 0 ; 
                break;
            }
        }

        if(str2[j] == '\0')
        {
            break;
        }
    }

    if(flag)
    {
        printf(" %s cümlesinde %s kelimesi mevcut",str1,str2);
    }
    else
    {
        printf("%s cümlesinde %s kelimesi mevcut degil",str1,str2) ;
    }
    return 0 ; 
}