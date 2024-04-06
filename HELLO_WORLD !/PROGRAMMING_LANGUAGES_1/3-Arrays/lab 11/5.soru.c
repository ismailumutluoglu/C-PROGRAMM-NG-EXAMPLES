#include <stdio.h>
#define ogrencisayisi 4

int main()
{
    int notes[ogrencisayisi][3];
    int i,j,OgrenciNo;
    float sum1,sum2,sum3,sum4;
    sum1=0.0;
    sum2=0.0;
    sum3=0.0;
    sum4=0.0;
    
    for(i=0;i<ogrencisayisi;i++)
    {
        printf("%d.ogrencinin notlarini giriniz(MATEMATİK-FIZIK-PROGRAMLAMA)\n",i+1);
        for(j=0;j<3;j++)
        {
            scanf("%d",&notes[i][j]);
        }
    }
    
    printf("       MAT     FIZIK    PROG     ORT\n");
    for(i=0;i<ogrencisayisi;i++)
    {
        printf("%d\t",i+1);
        for(j=0;j<3;j++)
        {
            printf("%d\t",notes[i][j]);
            if(i==0)
            {
                sum1+=notes[0][j];
            }
            else if(i==1)
            {
                sum2+=notes[1][j];
            }
            else if(i==2)
            {
                sum3+=notes[2][j];
            }
            else
            {
                sum4+=notes[i][j];
            }
        }
        if(i==0)
        {
            printf("%.2f",sum1/3.0);
        }
        else if(i==1)
        {
            printf("%.2f",sum2/3.0);
        }
        else if(i==2)
            {
                printf("%.2f",sum3/3.0);
            }
        else{
            printf("%.2f",sum4/3.0);
        }

        printf("\n");
    }

    if(sum1>sum2 && sum1>sum3 && sum1>sum4)
    {
        printf("ortalamasi en yuksek olan 1 nolu ogrencidir ve ortalamasi = %.2f",sum1/3.0);
    }

    else if(sum2>sum1 && sum2>sum3 && sum2>sum4)
    {
        printf("ortalamasi en yuksek olan 2 nolu ogrencidir ve ortalamasi = %.2f",sum2/3.0);
    }
    else if(sum3>sum1 && sum3>sum2 && sum3>sum4)
    {
        printf("ortalamasi en yuksek olan 3 nolu ogrencidir ve ortalamasi = %.2f",sum3/3.0);
    }
    else if(sum4>sum1 && sum4>sum2 && sum4>sum3)
    {
        printf("ortalamasi en yuksek olan 4 nolu ogrencidir ve ortalamasi = %.2f",sum4/3.0);
    }
    return 0;
}