#include <stdio.h>
int main()
{
    int i,j,k;

    for(i=1;i<=100;i++)
    {
        k=00;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                k++;
            }
        }
        if(k==2)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}