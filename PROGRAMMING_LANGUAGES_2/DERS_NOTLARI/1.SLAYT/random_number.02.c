#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int freq1 = 0 ;
    int freq2 = 0 ;
    int freq3 = 0 ;
    int freq4 = 0 ;
    int freq5 = 0 ; 
    int freq6 = 0 ; 

    int rakam ;
    for(int i = 0 ; i < 6000 ; i++)
    {
        rakam = rand() %6 +1 ;

        switch(rakam)
        {
            case 1 : freq1++;
            break;
            case 2 : freq2++;
            break;
            case 3 : freq3++;
            break;
            case 4 : freq4++;
            break;
            case 5 : freq5++;
            break;
            case 6 : freq6++;
            break;
        }
    }
        printf("freq1 = %d\n",freq1);
        printf("freq2 = %d\n",freq2);
        printf("freq3 = %d\n",freq3);
        printf("freq4 = %d\n",freq4);
        printf("freq5 = %d\n",freq5);
        printf("freq6 = %d\n",freq6);
        return 0 ; 
    }
