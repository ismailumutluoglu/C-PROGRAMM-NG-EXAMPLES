// 13. Write a program in C to extract a substring from a given string.

// Test Data :
// Input the string : this is test string
// Input the position to start extraction :9
// Input the length of substring :4

// Expected Output :

// The substring retrieve from the string is : " test "

// 16. Write a program in C to find the number of times a given word 'the' appears in the given string.

// Test Data :
// Input the string : The string where the word the present more than once.

// Expected Output :

// The frequency of the word 'the' is : 3

//  #include <stdio.h>


//   int main()
//   {
//       char str[] = "The string where the word the present more than once." ; 

// int count = 0 ; 
     
//       for(int i = 0 ; str[i] != '\0'; i++)
//       {
//           if((str[i] == 't' || str[i] == 'T') && (str[i+1] == 'h' || str[i+1] == 'H') && (str[i+2] == 'e' || str[i+2] == 'E'))
//           {
//               count++;
//          }
         
//       }
//       printf("%d kere the kelimesi gecmektedir",count);
//       return 0 ; 
//   }

// #include <stdio.h>

// int main()
// {
//     char str[] = "benimad2ismail.umutluoglu" ;
//     int i = 0 ; 

//     while(str[i] != '\0')
//     {
//         if(str[i] >= 'a' && str[i] <= 'z')
//         {
//             printf("%c",str[i]);
//         }
//         i++;
//     }
//     return 0 ; 

//  #include <stdio.h>

//  int main()
//  {
//     char str[] = "eren benim adim ismail" ;
//     int flag ; 

//     for(int i = 0 ; str[i] != '\0' ; i++)
//     {
//         flag = 1 ;
    
//         for(int j = 0  ; str[j] != '\0' ; j++)
//         {
//             if(i != j)
//             {
//                if(str[i] == str[j])
//                 {
//                     flag = 0 ; 
//                     break;
//                 } 
//             }
//         }
//             if(flag)  
//             {
//                 printf("%c",str[i]);
//             }
//     }

//     return 0 ; 
//  }


// #include <stdio.h>

// int main()
// {

// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[] = "The string where the word the present more than once." ;
//     char str2[100] ;

//     printf("bulmak istediginiz kelimeyi giriniz : ");
//     gets(str2) ;
    
//     int x = strlen(str2) ;

//     for(int i = 0 ; str[i] != '\0' ; i++)
//     {
        
//     }

//     return 0 ; 
// }


// #include <stdio.h>

// int main()
// {
//     char str[] = "ismail" ; 
//     int x  ; 
//     for(int i = 0 ; i < str[i] != '\0' ; i++)
//     {
//         x  = 1 ; 
        
//         for(int j = 0 ; str[j] != '\0' ; j++ )
//         {
//             if(i != j)
//             {
//               if(str[i] == str[j])
//                 {
//                 x++;
//                 }  
//             } 
//         }
//         if(str[])
//         printf("%c\t\t%d\n",str[i],x);
//     }
//     return 0 ; 
// }

#include <stdio.h>

int main()
{
    char sentence[100] ;
    char word[50] ;

    printf("bir cümle giriniz : ");
    gets(sentence) ;

    printf("bir adet kelime giriniz : ");
    gets(word);

    int flag,count=0; 

    for(int i = 0 ; sentence[i] != '\0' ; i++)
    {
        flag = 0 ; 
        int k = i ; 
        if(sentence[i] == word[0])
        {
            for(int j = 1 ; word[j] != '\0' ; j++)
            {
                if(sentence[k+1] == word[j])
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
        }
        if(flag)
        {
            count++;
        }
    }

    printf("%s kelimesi %d kez tekrar etmektedir",word,count);

    return 0 ;
}