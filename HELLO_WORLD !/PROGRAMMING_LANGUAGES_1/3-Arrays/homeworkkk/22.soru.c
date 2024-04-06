/*Girilen sayının abundant (güçlü) sayı mı ya da Deficient (güçsüz) sayı
mı olduğunu bulan programın algoritma ve akış diyagramını çiziniz.*/

//n bir pozitif tam sayı olmak üzere, n'yi bölen her bir p asal sayısı 
//için p*p de n'yi bölüyorsa n'ye bir kuvvetli sayı denir. 
//Örneğin; 72 sayısını inceleyelim. 72 nin asal bölenleri 2 ve 3 tür. Bu durumda 72 bir kuvvetli sayıdır


#include <stdio.h>

int main()
{
    int num,i,sum;

    sum=0;

    printf("n sayisini giriniz ");
    scanf("%d",&num);

    for(i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }

    if(sum>num)
    {
        printf("guçludur");
    }
    else{
        printf("gucsuzdur");
    }
    return 0;
}