#include <stdio.h>

int main()
{
    int notes[4][3];

    int i ,j;

    
    for(i =0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d. ogrencinin notlarini giriniz : ",i+1);
            scanf("%d",&notes[i][j]);
        }
    }

    for(i=0;i<4;i++)
    {
        float sum = 0.0 ;
        
        printf("%d  ",i+1);
        for(j=0;j<3;j++)
        {
            printf("%d ",notes[i][j]);
            sum+=notes[i][j];
        }
        printf(" %f",sum/3.0);
        printf("\n");
    }
    return 0 ;
}