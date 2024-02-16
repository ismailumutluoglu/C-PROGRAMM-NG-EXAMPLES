// #include <stdio.h>

// int main()
// {
//     char Array[20] = ",tarik";
//     char temp[20] ;

//     int i = 0,j;

//     while(Array[i] != '\0')
//     {
//         i++;
//     }

//     for(j=0;j<i/2;j++)
//     {
//         temp[j] = Array[j] ;
//         Array[j] = Array[i-1-j];
//         Array[i-1-j] = temp[j] ;
//     }
    
//     j = 0 ;

//    for(j=0;j<i/2;j++)
//    {
//         while(Array[j] != '\0')
//         {
//             if(Array[j] != Array[i-1-j])
//             {
//                 printf("%s,polindrom degil",Array);
//                 return 0 ;
//             }
//             else
//             {
//                 break ;
//             }
//         }
//    }

//     printf("%s,polindrom",Array);
//     return 0 ;
// }


// #include <stdio.h>

// int main()
// {
//     char str1[10] ;
//     char str2[10] ;
//     char temp[10];

//     printf("birinci kelimeyi gir : ");
//     scanf("%s",str1);

//     printf("ikinci kelimeyi gir : ");
//     scanf("%s",str2);
    
//     int i , k ;

//     k = 0 ;

//     while(str2[k] != '\0')
//     {
//         k++;
//     }

//     for(i=0;i<k/2;i++)
//     {
//         temp[i] = str1[i] ;
//         str1[i] = str1[k-i-1] ;
//         str1[k-i-1] = temp[i];
//     }

//     printf("%s %s",str2,str1) ;
 
//     return 0 ; 
// }

#include <stdio.h>
#include <string.h>
int main()
{
    char str[50] ;

    printf("bir cümle giriniz : "); 
    gets(str);

    int i = 0 , count = 0 ,j = 1;

    while(str[i] != '\0')
    {
        if(str[i] == 'a')
        {
            count++;
        }
        else
        {
            if(str[i] == ' ' || str[i] == '\n')
            {
                printf("%d. kelimede 'a' %d tane vardir \n",j,count);
                count=0;
                j++;
            }
        }
        i++;      
    }
    return 0 ;
}