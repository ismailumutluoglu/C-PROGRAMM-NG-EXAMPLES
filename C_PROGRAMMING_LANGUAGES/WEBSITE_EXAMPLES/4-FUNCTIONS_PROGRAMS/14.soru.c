// STRİNG İŞLEMLER

// #include <stdio.h>

// int main()
// {
//      char varSentence[] = "ben bu dersin sinavindan iyi alacağim kendime güveniyorum";
//      char var ; 

//      printf("bir harf giriniz ") ;
//      scanf("%c",&var) ;

//      int k  = 0 ;
//      int count = 0 ; 
//      while(varSentence[k] != '\0')
//      {
//         if(varSentence[k] == var )
//         {
//             count++;
//         }
//         k++;
//      }

//      printf("%c karakteri %d kez tekrar etmektedir",var,count);
//      return 0 ; 
// }

// #include <stdio.h>

// int main()
// {
//     int vowel = 0 , consonant = 0 , digit = 0 , space = 0 ; 
//     int lenght = 0 ;
//     char sentence[] = "benim adim cafer5 ve kaşla3rimi1n rengi8ni tam olarak bilmiyorum";

//     while(sentence[lenght] != '\0')
//     {
//         lenght++;
//     }

//     printf("%d\n",lenght);

//         int i = 0 ;
//     while(sentence[i] != '\0')
//     {

        
//         if(sentence[i] >= '0' && sentence[i] <= '9')
//         {
//            digit++; 
//         }
        
//         if(sentence[i] == ' ')
//         {
//             space++;
//         }

//         if(sentence[i]== 'A' || sentence[i]== 'a' || sentence[i]== 'E' || sentence[i]== 'e' || sentence[i]== 'i' || sentence[i]== 'o' || sentence[i]== 'u')
//         {
//             vowel++;
//         }
//         i++;
//     }


//     printf("%d tane sayi vardir \n",digit);
//     printf("%d tane sesli vardir \n",vowel);
//     printf("%d tane sessiz vardir \n",lenght-vowel);
//     printf("%d tane bosluk vardir ",space);
//     return 0 ; 
// }

// #include <stdio.h>

// int main()
// {
//     char sentence[] = "margorp emosewa";
//     char temp[100];

//     int k = 0 ; 
//     int i ;

//     while(sentence[k] != '\0')
//     {
//         k++;
//     }

//     for(i=0;i<k/2;i++)
//     {
//         temp[i]=sentence[i];
//         sentence[i]=sentence[k-i-1];
//         sentence[k-i-1]=temp[i];
//     }

//     printf("%s",sentence);
//     return 0 ; 
// }

// #include <stdio.h>

//  int main()
//  {
//      char var[] = "p2'r-o@gram84iz./" ;
//      char var2[100];
//      int i = 0 ; 

//      while(var[i] != '\0')
//      {
//          if((var[i] >='a' && var[i] <= 'z'))
//          {
//             printf("%c",var[i]);
//          }
//          i++;
//      }
    
     
//      return 0 ; 
//  }

#include <stdio.h>

int main()
{
    int array[5] = {1,1,2,2,3};
    
    int i , j , k ; 

    for(i=0;i<5;i++)
    {
        if(array[i] == array[i+1])
        {

        }
    }
    return 0 ; 
}