#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
   char *str;
   char aranan ;
   str = (char*)malloc(100*sizeof(char));
   printf("cümle giriniz : ");
   gets(str);
   printf("aramak istediginiz kelimeyi giriniz : ");
   scanf("%c",&aranan);
   int len = strlen(str);
   int i  ;
   for(i = 0 ; str[i] != '\0' ; i++)
   {
        if(aranan == str[i])
        {
            printf("%d\n",&str[i]);
        }
   }
   free(str);
    return 0 ; 
}