// Soru 4: Verilen bir sayısı dizisi içerisinde yer alan sayıları pointer kullanarak tersten yazdıran programı 
// C dilinde yazınız.

#include <stdio.h>
void reverse_array(int* array,int j);
int main()
{
    int size ;
    printf("dizinin kac elemandan oluşacagini giriniz : ");
    scanf("%d",&size);
    int dizi[size];

    for(int i = 0 ; i < size ; i++)
    {
        printf("dizi[%d] = ? :",i);
        scanf("%d",&dizi[i]);
    }
    reverse_array(dizi,size);
    return 0 ; 
}
void reverse_array(int* array,int j)
{
    if(j > 0)
    {
        printf("%d  ",*(array + j -1 ));
        reverse_array(array,j-1);
    }
}