// 3. Verilen bir cümledeki kelimelerin sadece son harflerini yazdıran bir fonksiyon yazınız. 
// Örnek: Adana Taş Köprü Balcalı  
// > aşüı 

#include <stdio.h>
void sonHarfler(char str[]);

int main()
{
    char str[100] ;
    printf("bir cümle giriniz : ");
    gets(str);

    sonHarfler(str);
    return 0 ; 
}
void sonHarfler(char str[])
{
   int i  = 0 ; 

   while(str[i] != '\0')
   {
    if(str[i] == ' ')
    {
        printf("%c",str[i-1]);
    }
    i++;
   }
   printf("%c",str[i-1]);
}