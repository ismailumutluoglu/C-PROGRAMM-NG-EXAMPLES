#include <stdio.h>
#include <math.h>

int main()
{
    int Array[3][3] = {{5,6,1},{7,2,9},{6,1,3}};
    int i,j,sum1,sum2,x;

    sum1 = 0;
    sum2 = 0;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum1=sum1+Array[i][j];
            }
            sum2+=(Array[i][j]*Array[i][j]);
        }
    }
        x = sqrt(sum2);
        printf("trace = %d\n",sum1);
        printf("normal = %d",x);         

        return 0 ;
}