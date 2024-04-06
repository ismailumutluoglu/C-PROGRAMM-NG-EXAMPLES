// 1- 10 elemanlı tamsayı dizisine klavyeden değerler girilerek bir fonksiyona gönderilecek. Dizide yer 
// alan en büyük ilk iki sayıyı bularak ekrana yazdıran fonksiyonu yazınız.

#include <stdio.h>
void maxNumbers(int array[],int size);
int main()
{
    int dizi[10] ;

    for(int i = 0 ; i < 10 ; i++)
    {
        printf("%d. elemani giriniz  : ",i+1);
        scanf("%d",&dizi[i]);
    }
    maxNumbers(dizi,10);
    return 0 ;
}
void maxNumbers(int array[],int size)
{
    int max1,max2,i;
    if(array[0]>array[1])
    {
        max1 = array[0] ; 
        max2 = array[1] ; 
    }
    else
    {
        max1 = array[1];
        max2 = array[0];
    }
    for(i = 2 ; i < 10 ; i++)
    {
        if(array[i]>max1)
        {
            max2 = max1;
            max1 = array[i] ;
        } 
        else if (array[i] > max2)
        {
            max2 = array[i];
        }
        
    }
    printf("en büyük sayi = %d\n en büyük ikinci sayi = %d",max1,max2);
}