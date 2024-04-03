#include <stdio.h>
#include <stdlib.h>
// Soru 2: Dinamik bellek ayırma yöntemi kullanılarak en büyük sayıyı bulan programı C dilinde yazınız. 
// Dizinin boyutunu kullanıcıya sorunuz ve dizinin elemanlarını kullanıcıdan alınız.  
int find_max_number(int *p,int max,int size);
int main()
{
    int size,i,*ptr,max;
    printf("dizinin kac elemandan olusacagini giriniz : ");
    scanf("%d",&size);
    ptr = (int*)malloc(size*sizeof(int));
    if(ptr==NULL)
    {
        printf("YETERLİ ALAN BULUNAMADI");
        return 0 ; 
    }
    for(i=0;i<size;i++)
    {
        printf("dizinin %d.elemanini giriniz : ",i+1);
        scanf("%d",(ptr+i));
    }
    max = *ptr;
    printf("girilen dizideki max eleman = %d",find_max_number(ptr,max,size));
    free(ptr);
    return 0 ; 
}
int find_max_number(int *p,int max,int size)
{
    for(int i=1;i<size;i++)
    {
        if(*(p+i)>max)
        {
            max = *(p+i);
        }
    }
    return max;
}