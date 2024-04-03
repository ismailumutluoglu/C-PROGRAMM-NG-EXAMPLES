#include <stdio.h>
#include <stdlib.h>
void fonksiyon(int num,int**p);
int main()
{
    int student_number ; 
    int*dizi = NULL;
    dizi = (int*)malloc(sizeof(int));

    printf("ogrenci numaranizi giriniz : ");
    scanf("%d",&student_number);

    fonksiyon(student_number,&dizi);
    for(int j = 0 ; j < dizi[0] ; j++)
    {
        printf("%d",dizi[j+1]);
    }
    return 0 ; 
}
void fonksiyon(int num,int**p)
{
    int i=0;
    while(num > 0)
    {
        if((num%10)%2 ==0)
        {
            *p = (int*)realloc(*p,(i+2)*sizeof(int));
            **(p+i)=num%10;
            i++;
        }
    }
}