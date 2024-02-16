#include <stdio.h>

int main()
{
    int Array[10],i,max,min;

    for(i = 0; i < 10; ++i)
    {
        printf("%d. elemani giriniz ",i+1);
        scanf("%d",&Array[i]);
        printf("\n");
    }

    max = Array[0];
    min = Array[0];

    for(i = 1; i < 10; ++i)
    {
        if(Array[i]>max)
            max = Array[i];
        
        if(Array[i]<min)
        min = Array[i];
    }

    printf("max = %d min =  %d",max,min);
    return 0;
}