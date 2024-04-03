#include <stdio.h>
#include <stdlib.h>
void swap_numbers(int *p1,int *p2);
int main()
{
    int *a,*b;
    a = (int*)malloc(sizeof(int));
    b = (int*)malloc(sizeof(int));
    if(a == NULL || b == NULL)
    {
        printf("YETERLI ALAN TAHSIS EDILEMEMISTIR");
        return 0 ; 
    }
    printf("birinici sayiyi giriniz : ");
    scanf("%d",a);
    printf("ikinci sayiyi giriniz : ");
    scanf("%d",b);
    swap_numbers(a,b);
    printf("birinci sayi = %d , ikinci sayi = %d",*a,*b);
    free(a);
    free(b);
    return 0 ; 
}
void swap_numbers(int *p1,int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2 ; 
    *p2 = temp ;
}