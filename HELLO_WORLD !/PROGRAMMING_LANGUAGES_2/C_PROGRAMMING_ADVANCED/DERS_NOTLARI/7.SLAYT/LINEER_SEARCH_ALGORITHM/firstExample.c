#include <stdio.h>
int lineerSearch(int dizi[],int n,int aranan);
int main()
{
    int array[] = {1,2,8,4,5,6,7,2,9,10};
    int size = sizeof(array)/sizeof(array[0]);
    int aranan,sonuc; 
    printf("aramak istediginiz degeri giriniz : ");
    scanf("%d",&aranan);
    sonuc = lineerSearch(array,size,aranan);
    if(sonuc == -1)
    {
        printf("aramak istediginiz deger dizide bulunmamaktadir");
    }
    else
    {
        printf("%d. sirada bulunur",sonuc+1);
    }
    return 0 ; 
}
int lineerSearch(int dizi[],int n,int aranan)
{
    int i ; 
    for(i = 0 ; i < n ; i++)
    {
        if(dizi[i] == aranan)
        {
            return i  ;
        }
    }
    return -1 ; 
}