#include <stdio.h>

int main()
{
    int Array[16]={-25,-16,-20,-11,-9,-4,-1,2,5,10,16,19,20,25,30,35} ; 

    int x,y,z,t; 
    x = 0;
    y = 0;
    z = 0;
    t = 0;

    for(int i = 0 ; i < 16;++i)
    {
        if(Array[i] >= -25 && Array[i] < -10 )
        {
            x++;
        }
        else if(Array[i] >= -10 && Array[i] < -5 )
        {
            y++;
        }
        else if(Array[i] >= 5 && Array[i] < 20 )
        {
            t++;
        }
        else if(Array[i] >= 25 && Array[i] <= 35 )
        {
            z++;
        }
    }

    printf("[-25 , -10) = %d \n",x);
    printf("[-10 , -5) = %d \n",y);
    printf("[5,20) = %d \n",t);
    printf("[20 ,35] = %d \n",z);

    return 0 ;
}