/*#include <stdio.h>
int main()
{
    int i ,j;

    for(i=1;i<=36;i++)
    {
        for(j=1;j<25;j++)
        {
            if(i==j*j)
            {
                printf("%d\n",i);
            }
        }
    }
    return 0;
} */

#include <stdio.h>
int main()
{
    double i,carpim;

    carpim=1;

    for(i=1;i<=25;i++)
    {
        carpim=carpim*i*i;
    }
    printf("%lf",carpim);
    return 0;
}