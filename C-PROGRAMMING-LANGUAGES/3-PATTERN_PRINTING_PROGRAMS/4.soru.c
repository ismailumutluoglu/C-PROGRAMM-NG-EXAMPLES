//     1
//    232
//   34543
//  4567654
// 567898765

#include <stdio.h>

int main()
{

    int i,j,k;

    for(i=1;i<5;i++)
    {
        for(k=0;k<5-i;k++)
        {
            printf(" ");
        }

        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}