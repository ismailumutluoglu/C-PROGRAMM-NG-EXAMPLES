// Maksimum 5 basamaklı sayının basamaklarındaki rakamları diziye atan ve ekrana basan 
// programı yazınız.  

#include <stdio.h>

int main()
{
    int array[5] ; 
    int number , kalan , i = 0 ; 

    printf("bir sayi giriniz : ");
    scanf("%d",&number);

    while(number > 0 && number < 100000)
    {
        kalan = number % 10 ; 
        array[i] = kalan ; 
        number = number /10 ;
        i++;
    }

    for(int j = i-1 ; j >= 0  ; j--)
    {
        printf("array[%d] = %d\n",j,array[j]);
    }
    return 0 ; 
}