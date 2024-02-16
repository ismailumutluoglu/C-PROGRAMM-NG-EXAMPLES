// N elemanlı bir dizi bulunmaktadır. Klavyeden girilen sayılar
// diziye, bir tane baştan bir tane sondan olmak üzere
// yerleştirilmektedir. Örneğin ilk sayı birinci elemana, ikinci
// sayı N’inci elemana, üçüncü sayı ikinci elemana, dördüncü sayı
// N-1’inci elemana... şeklinde yerleştirilmektedir. N tane sayıyı
// klavyeden okuyup diziye yerleştiren ve diziyi ekranda
// görüntüleyen programın algoritma ve akış diyagramını çiziniz.

#include <stdio.h>


int main()
{
    int N = 9 ; 

    int array[N];

    for(int i = 0; i <N;i++)
    {
        scanf("%d",&array[i]);
        if(N-1 != i)
        scanf("%d",&array[N-1]);

        N--;
    }
    N = 9; 
    for(int i = 0; i < N ; i++)
    {
        printf("%d ",array[i]);
    }
    return 0 ;
}