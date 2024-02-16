// #include <stdio.h>

// int main()
// {
//     char str[100] = "benim adim cafer";
//     char str2[100];
    
//     int i , j , k ,count,n;

//     n = 0 ;
//     str[n] = ' ';
//     k = 0 ; 

//     while(str[k] != '\0')
//     {
//         k++;
//     }

//     for(i=0;i<k;i++)
//     {
//         n++;
//          count = 1 ;
//         if(str[i]!=str[n])
//         {
//             for(j=0;j<k;j++)
//             {
//                 if(i != j)
//                 {
//                     if(str[i]==str[j])
//                     {
//                         str[n]=str[i];
//                         count++;
//                     }
//                 }
//             }   
//         } 
//         printf("%c %d kadar vardir\n",str[i],count);
//     }
     

//     return 0 ;
// }

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "ahmet" ;
    char str2[] = "come" ;
    
    char temp ; 
    int i,k;

    k = 0 ;
    while(str1[k] != '\0')
    {
        k++;
    }

    for(i = 0 ; i < k/2 ; i++)
    {
        temp = str2[i];
        str2[i] = str2[k-i-1];
        str2[k-i-1] = temp ; 
    }

    printf("%s",str2);
    
    
    
    return 0 ; 
    
    
}