// 15 14 13 12 11
// 10 9 8 7 
// 6 5 4
// 3 2
// 1  
#include <stdio.h>

int main()
{
    int i,j,number;

    number=15;

    for(i=0;i<5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            printf("%d  ",number);
            number--;
        }
        printf("\n");
    }
    return 0;
}