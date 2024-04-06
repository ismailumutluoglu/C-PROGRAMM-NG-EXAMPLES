// dizide yer alan en büyük ilk iki sayiyi ekrana yazdiran program 10 elemanli

#include <stdio.h>

int main()
{
    int Array[10],max1,max2;

    for(int i = 0 ; i <10;i++)
    {
        printf("%d. elemani giriniz: ",i+1);
        scanf("%d",&Array[i]);
    }
    
    if(Array[1]>Array[0])
    {
        max1=Array[1];
        max2=Array[0];
    }
    else
    {
         max2=Array[0];
         max2=Array[1];
    }

    for(int i=2;i<10;i++)
    {
        if(Array[i]>=max2)
        {
            if(Array[i]>=max1)
            {
                max2=max1;
                max1=Array[i]; 
            }
            else
            {
                max1=Array[i];
            }
        }
        
    }
    printf("%d\n",max1);
    printf("%d",max2);
    return 0;
}
