// #include <stdio.h>

// int main()
// {
//     char str[14]="Ahmet merhaba",temp;
//     int i,j;

//     for (i=0 ; i<str[i]!='\0' ; i++)
//     {
//         for (j = i; j < 13; j++)
//         {    
//            if (str[i]==' ' || str[j] == ' ' )
//             continue;
//             if (j != i )
//             {
//                 if (str[i] > str[j])
//                 {
            
//                     temp = str[j];
//                     str[j] = str[i];
//                     str[i] = temp;
//                 }
//             }
//         }
//     }
//      printf("%s",str);
//     return 0;
// }

#include <stdio.h>

int main()
{
    char array[30] = "Elif merhaba" ;
    char temp;
    int i  , j = 0 , k;

    while(array[j] != '\0')
    {
        j++;
    }

    for(i = 0 ; i < j ; i++)
    {
        
        for(k = i ; k < j ; k++)
        {
            // if(array[k] == ' ')
            // {
            //     continue ; 
            // }
            if(i != k)
            
            if(array[i] > array[k])
            {
                temp = array[k];
                array[k] = array[i];
                array[i] = temp ; 
            }
        }
    }

    printf("%s",array);
    return 0 ; 
}