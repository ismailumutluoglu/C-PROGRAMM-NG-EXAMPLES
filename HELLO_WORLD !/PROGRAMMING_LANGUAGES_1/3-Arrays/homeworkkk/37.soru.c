#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
     int i,number,pozitif,negatif;
     

     pozitif=0;
     negatif=0;

     printf("sayi girin");
     for(i=0;i<5;i++)
     {
        scanf("%d",&number);
        if(number>0)
        pozitif++;
        else
        negatif++;
     }
     printf(" pozitif : %d\n",pozitif);
     printf(" negatif : %d",negatif);

    return 0;
}