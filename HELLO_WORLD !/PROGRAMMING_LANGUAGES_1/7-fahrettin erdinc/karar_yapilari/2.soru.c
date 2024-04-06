#include <stdio.h>

int main()
{
    char day ; 

    printf("hangi gunu ogrenmek istediginizi giriniz : ");
    scanf("%d",&day);

   switch (day)
   {
    case 1 : printf("pazartesi");
    break;
    case 2 : printf("sali");
    break;
    case 3 : printf("carsamba");
    break;
    case 4 : printf("persembe");
    break;
    case 5 : printf("cuma");
    break;
    case 6 : printf("cumartesi");
    break;
    default: printf("pazar");
    break;
   }
    return 0 ; 
}