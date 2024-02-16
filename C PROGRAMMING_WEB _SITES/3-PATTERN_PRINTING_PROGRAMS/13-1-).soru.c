// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14
// 15 16 17 18 19
// 20 21 22 23 24 25

#include <stdio.h>

int main()
{
    int i,j,number;

    number=1;

    for(i=1;i<=7;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",number);
            number++;
        }
        printf("\n");
    }
    return 0;
}