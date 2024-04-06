#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h> 
#include <string.h>

// alfabedeki sonraki harf ile degistir
// see muratoksuzer.com
int main()
{
   char str[100] ;
   
   printf("bir metin giriniz");
   gets(str);

   int i = 0 ; 

   while(str[i] != '\0')
   {
     str[i]++;
     i++;
   }

   printf("%s",str);

    
    return 0;
}